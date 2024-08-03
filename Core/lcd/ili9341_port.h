#ifndef _ILI9341_PORT_H_
#define _ILI9341_PORT_H_

#include "main.h"
// USER Should fill these with HAL functions
#define RESET_L()  //HAL_GPIO_WritePin(RESET_GPIO_Port, RESET_Pin, GPIO_PIN_RESET)
#define RESET_H()  //HAL_GPIO_WritePin(RESET_GPIO_Port, RESET_Pin, GPIO_PIN_SET)
#define CS_L()     //HAL_GPIO_WritePin(SPI1_NSS_GPIO_Port, SPI1_NSS_Pin, GPIO_PIN_RESET)
#define DC_L()     //HAL_GPIO_WritePin(DC_GPIO_Port, DC_Pin, GPIO_PIN_RESET)
#define DC_H()     //HAL_GPIO_WritePin(DC_GPIO_Port, DC_Pin, GPIO_PIN_SET)
#define LED_H()    //HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET)

#define LCD_Delay(ms) LL_mDelay(ms)

#endif