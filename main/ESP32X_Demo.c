/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include "main.h"

void uart_task()
{
    uart_init();
    xTaskCreate(tx_task, "uart_tx_task", 1024*2, NULL, configMAX_PRIORITIES-1, NULL);
}



void app_main(void)
{
      
}
