/*********************************************************************************/
/* Author    : Fyad                                                              */
/* Version   : V02                                                               */
/* Date      : 29 OCT 2023                                                       */
/*********************************************************************************/
#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H



/***************   Function definition    ******************/

void UART_voidinit(void );
void UART_voidSendMsg(uint8 *msg);
u32  UART_u32ReceiveMsg(void);


#endif // UART_INTERFACE_H
