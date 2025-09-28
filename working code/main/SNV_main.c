/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"


//Application code headers
#include "Vending_parameters.h"
#include "device_init.h"


//global variables
int vend_coin_state;
int vend_upi_state;
int vend_rfid_state;
int coinvalue;


void app_main(void)
{
    bool state = false;

    device_init();

    while(1){
        if(coinvalue > 5){
            state = vend_product();
            if(state){
                // Product vended successfully
                 start_motor();
                 LED_green_on();
                coinvalue = 0;
                //wait for 5 seonds for product to vend
            } else {
                // Handle vending failure
                LED_red_on();
            }
           
           
            
            
        }
    }
   
}
