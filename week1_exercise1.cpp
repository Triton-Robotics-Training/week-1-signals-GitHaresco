//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

DigitalOut led(LED1);         //LED is "outputting" on or off
DigitalIn input(BUTTON1);     //Button is responsible for taking in data (pressed or not)       


int main() {
    while (1) {
        printf("Week 1 Exercise 1");
        int buttonInput = input.read();
        
        if (buttonInput == 1) { //pressing button turns on button
            led = 1;
        }
        else {                  //button is off otherwise
            led = 0;
        }

        // MAKE SURE THERE IS ALWAYS A WAIT ON THE SIM OR IT WILL CRASH
        wait_ms(500); 
    }
}
