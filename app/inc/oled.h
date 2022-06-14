#ifndef __OLED_H
#define __OLED_H


#define OLED_IIC_ADDR 0x3C  //OLED的I2C地址
#define OLED_IIC_SDA_PIN 33
#define OLED_IIC_SCL_PIN 32
#define OLED_IIC_TIMEOUT 200 //传输超时时间200ms
#define OLED_IIC_DEVICE I2C_NUM_0 //IIC外设编号
#define OLED_IIC_BUS_FREQ 1000000 //1Mhz

#define OLED_X 128
#define OLED_Y 64/8

esp_err_t oled_init();
esp_err_t oled_clear();
esp_err_t oled_6x8(uint8_t x, uint8_t y, const char* str);
esp_err_t oled_8x16(uint8_t x, uint8_t y, const char* str);
esp_err_t oled_bitmap(uint8_t x0, uint8_t y0, uint8_t x_lenth, uint8_t y_lenth, const uint8_t *bmp_tab);

#endif