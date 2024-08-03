#ifndef ILI9341_DRIVER_PORT_H
#define ILI9341_DRIVER_PORT_H

#include "main.h"
#define GUI_WIDTH 320
#define GUI_HEIGHT 240
// Your existing code here
#define DC_LOW()  LL_GPIO_ResetOutputPin(LCD_DC_GPIO_Port, LCD_DC_Pin)
#define DC_HIGH() LL_GPIO_SetOutputPin(LCD_DC_GPIO_Port, LCD_DC_Pin)
#define CS_LOW()  LL_GPIO_ResetOutputPin(LCD_CS_GPIO_Port, LCD_CS_Pin)
#define CS_HIGH() LL_GPIO_SetOutputPin(LCD_CS_GPIO_Port, LCD_CS_Pin)
#define RESET_LOW()  LL_GPIO_ResetOutputPin(LCD_RESET_GPIO_Port, LCD_RESET_Pin)
#define RESET_HIGH() LL_GPIO_SetOutputPin(LCD_RESET_GPIO_Port, LCD_RESET_Pin)


#define CS_ON CS_LOW()
#define CS_OFF CS_HIGH()
#define DC_DATA DC_HIGH()
#define DC_COMMAND DC_LOW()
#define RESET_OFF RESET_HIGH()
#define RESET_ON RESET_LOW()


void ILI9341_Init(void);
void ILI9341_SetWindow(uint16_t start_x, uint16_t start_y, uint16_t end_x, uint16_t end_y);
void ILI9341_DrawBitmap(uint16_t w, uint16_t h, uint8_t *s);
void ILI9341_WritePixel(uint16_t x, uint16_t y, uint16_t color);
void ILI9341_EndOfDrawBitmap(void);

void LCD_WR_REG(uint8_t data);
void LCD_IO_WriteMultipleData(uint8_t *pData, uint32_t Size);



#endif // ILI9341_DRIVER_PORT_H