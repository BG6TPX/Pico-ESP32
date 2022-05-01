#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

#include "esp_spi_flash.h"


#include "esp_log.h"

#include "driver/uart.h"
#include "string.h"
#include "driver/gpio.h"

//UART1
#include "uart.h" 

//OLED
#include "oled.h"
#include "Oledfont.h"
#include "Bmp.h"
