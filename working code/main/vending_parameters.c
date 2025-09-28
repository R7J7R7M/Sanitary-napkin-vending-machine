#include "Vending_parameters.h"
#include <stdbool.h>

extern int vend_coin_state;
extern int vend_upi_state;
extern int vend_rfid_state;

bool vend_product(){
    //code to vend product

    //wait for coin acceptor pulses
    if(vend_coin_state == 1) {
       // printf("\n the coin is accepted through the coin acceptor \n");
        return true;
    }

    //wait of upi
    else if(vend_upi_state == 1) {
       // printf("\n the upi is accepted through the upi module \n");
        return true;
    }   

    //wait for RFID
    else if(vend_rfid_state == 1) {
        //printf("\n the rfid is accepted through the rfid module \n");
        return true;
    }
    
    return false;
}

void start_motor(void){
    //code to start motor
   // printf("\n motor started \n");
}

void LED_green_on(void){
    //code to turn on green LED
   // printf("\n green LED is ON \n");
}

void LED_red_on(void){
    //code to turn on red LED
   // printf("\n red LED is ON \n");
}