//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

DigitalOut led(LED1);
AnalogIn pot(p20);

int main() {
    float resistance;
    while (1) {
        led = !led;
        resistance = pot.read();
        
        printf("The potentiometer reads %d\n", resistance );

        wait_ms(2000*resistance);
    }
}