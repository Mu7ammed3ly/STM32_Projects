/*********************************************************************************/
/* Author    : Fyad                                                              */
/* Version   : V02                                                               */
/* Date      : 29 OCT 2023                                                       */
/*********************************************************************************/
#include "../../01-LIB/01-STD_TYPES/STD_TYPES.h"
#include "../../01-LIB/02-BIT_MATH/BIT_MATH.h"


#include "UART_interface.h"
#include "UART_config.h"
#include "UART_private.h"

#include "../02-GPIO/GPIO_interface.h"
#include "../01-RCC/RCC_interface.h"

void UART_voidinit(void )
{
	/* AFIO Enable RCC */
	RCC_voidEnableClock(RCC_APB2,0);
	/* GPIOA Enable RCC */
	 RCC_voidEnableClock(RCC_APB2,2);
	/* UASRT Enable RCC */
	RCC_voidEnableClock(RCC_APB2,14);
	/* PA9 : USART1_TX  */
	/* PA10 : USART1_RX */
	/* pin configurations:
				PA9- TX is set to OUTPUT ALternate-push-pull and 50MHz
				PA10- RX is set to INPUT Floating (defult state)*/
	GPIO_voidSetPinDirection(GPIOA, PIN9, OUTPUT_SPEED_50MHZ_AFPP);
	GPIO_voidSetPinDirection(GPIOA, PIN10, INPUT_FLOATING);
	//GPIO_voidSetPinDirection(GPIOA, PIN10, INPUT_FLOATING);
	/* set BAUDRATEvalue */
	UART->BRR = BAUDRATE;
	/*  UART enable */
	SET_BIT(UART->CR1,13);
	/*  TX enable */
	SET_BIT(UART->CR1,3);
	/*  RX enable */
	SET_BIT(UART->CR1,2);

}
void UART_voidSendMsg(uint8 *msg)
{
    while(*msg != '\0') // Continue until null terminator
    {
        while(GET_BIT(UART->SR, 7) == 0); // Wait until TXE is 1 (Data Register Empty)
        UART->DR = *msg; // Send the current character
        msg++; // Move to the next character
    }
}

u32 UART_u32ReceiveMsg(void)
{
    u32 receivedValue = 0;
    u8 index = 0;
    u8 receivedByte;

    // Wait and receive 4 bytes
    for (index = 0; index < 4; index++)
    {
        // Wait for the RXNE (Receive Not Empty) bit to set
        while(GET_BIT(UART->SR, 5) == 0);

        // Read the received byte
        receivedByte = UART->DR;

        // Assemble the receivedValue from received bytes
        receivedValue |= ((u32)receivedByte << (index * 8));
    }

    return receivedValue;
}