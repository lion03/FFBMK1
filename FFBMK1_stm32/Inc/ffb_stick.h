#ifndef __FFB_Stick
#define __FFB_Stick

#ifdef __cplusplus
 extern "C" {
#endif
#include "stdint.h"	 
	 
void HID_GenerateInputRpt(uint32_t *adcValue);
void stick_Set_Acutator_PWM(int32_t PWMvalue,uint32_t axes); //Direction Automatic Switch Enabled
void stick_EffectExecuter(void);
void stick_Position_Calibration(void);
//void User_Defined_Init(void);
//void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

#ifdef __cplusplus
}
#endif

#endif /*__FFB_Stick*/


