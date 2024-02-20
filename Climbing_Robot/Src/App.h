/********************************************************/
/* Auther    : Muhammed Fyad                            */
/* Date      : 22/9/2023                                */
/* Version   : V01                                      */
/********************************************************/

#ifndef _APP_H_
#define _APP_H_

#include "01-LIB/01-STD_TYPES/STD_TYPES.h"
#include "01-LIB/02-BIT_MATH/BIT_MATH.h"
#include "02-MCAL/01-RCC/RCC_interface.h"
#include "02-MCAL/02-GPIO/GPIO_interface.h"

#define Open   0
#define Close  1
#define Pressed     LOW
#define NotPressed  HIGH

void Robot_voidInit(void);
void Robot_voidCloseGripers(void);
void Robot_voidOpenGripers(void);
void Robot_voidMoveUp(u8 copy_u8NumOfStep);
void Robot_voidMoveDown(u8 copy_u8NumOfStep);

extern u8 switch_right_up_close   ;
extern u8 switch_left_up_close    ;
extern u8 switch_right_down_close ;
extern u8 switch_left_down_close  ;
extern u8 switch_right_up_open    ;
extern u8 switch_left_up_open     ;
extern u8 switch_right_down_open  ;
extern u8 switch_left_down_open   ;

extern u8 switch_move_up_open     ;
extern u8 switch_move_down_close  ;

#endif
