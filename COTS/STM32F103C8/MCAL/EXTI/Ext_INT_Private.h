/***********************************************/
/************* Author: Moaz Ragab **************/
/************* date:  9 SEP 2023 **************/
/************* Version: 0.1       **************/
/************* Module:MCAL_EXT_INT_Private.h ***********/
/***********************************************/
#ifndef MCAL_EXT_INT_PRIVATE_H_
#define MCAL_EXT_INT_PRIVATE_H_

#define EXTI_BASE_ADDRESS 0x40010400U

typedef struct
{
    u32 EXTI_IMR;
    u32 EXTI_EMR;
    u32 EXTI_RTSR;
    u32 EXTI_FTSR;
    u32 EXTI_SWIER;
    u32 EXTI_PR;
} EXTI_Regdef_t;

#define EXTI ((EXTI_Regdef_t *)EXTI_BASE_ADDRESS)

#endif /***<End of the file*/