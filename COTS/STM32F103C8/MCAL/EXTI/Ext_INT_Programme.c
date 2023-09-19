/***********<LIB****************/
#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
/*******<Mcal********/
#include "Ext_INT_Interface.h"
#include "Ext_INT_Private.h"
#include "Ext_INT_Config.h"

Std_ReturnType EXTI_Enable(u8 Copy_Line)
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
    if (Copy_Line < 16)
    {
        SET_BIT(EXTI->EXTI_IMR, Copy_Line);
        Local_FunctionStatus = E_OK;
    }
    return Local_FunctionStatus;
}

Std_ReturnType EXTI_Disable(u8 Copy_Line)
{

    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
    if (Copy_Line < 16)
    {
        CLR_BIT(EXTI->EXTI_IMR, Copy_Line);
        Local_FunctionStatus = E_OK;
    }
    else
    {
        Local_FunctionStatus = E_NOT_OK;
    }
    return Local_FunctionStatus;
}

Std_ReturnType EXTI_SetpinTrigger(u8 Copy_Line, u8 Copy_Mode)
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
    switch (Copy_Mode)
    {
    case EXTI_RISING_EDGE:
        SET_BIT(EXTI->EXTR_RTSR, Copy_Line);
        Local_FunctionStatus = E_OK;
        break;
    case EXTI_FALLING_EDGE:
        SET_BIT(EXTI->EXTR_FTSR, Copy_Line);

        Local_FunctionStatus = E_OK;
        break;

    case EXTI_BOTH_EDGES:

        SET_BIT(EXTI->EXTR_RTSR, Copy_Line);
        SET_BIT(EXTI->EXTR_FTSR, Copy_Line);
        Local_FunctionStatus = E_OK;
        break;
    default:
        Local_FunctionStatus = E_NOT_OK;
        break;
    }
    return Local_FunctionStatus;
}

int main(void)
{
}