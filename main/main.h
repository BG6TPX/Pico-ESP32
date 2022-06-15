#include <stdio.h>
#include "stdlib.h"
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

#include "esp_spi_flash.h"
#include "esp_log.h"
#include <esp_err.h>

#include "string.h"
#include "stdint.h"

#include "driver/gpio.h"
#include "driver/uart.h"
#include "driver/i2c.h"


/******************HAL*********************/
//UART1
#include "uart.h" 

//IIC
#include "iic.h"




/******************APP*********************/
//OLED
#include "oled.h"
