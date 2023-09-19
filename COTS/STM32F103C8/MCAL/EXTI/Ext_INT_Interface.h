/***********************************************/
/************* Author: Moaz Ragab **************/
/************* date:  9 SEP 2023 **************/
/************* Version: 0.1       **************/
/************* Module:MCAL_EXT_INT_Interface.h ***********/
/***********************************************/
#ifndef MCAL_EXT_INT_INTERFACE_H_
#define MCAL_EXT_INT_INTERFACE_H_

#define EXTI_RISING_EDGE 1
#define EXTI_FALLING_EDGE 0
#define EXTI_BOTH_EDGES 2

Std_ReturnType EXTI_Init(void);

Std_ReturnType EXTI_Enable(u8 Copy_Line);
Std_ReturnType EXTI_Disable(u8 Copy_Line);
Std_ReturnType EXTI_SetpinTrigger(u8 Copy_Line, u8 Copy_Mode);

#endif /***<End of the file*/