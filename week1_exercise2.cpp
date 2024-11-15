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
        resistance = pot.read();
        
        printf("The potentiometer reads %f\n", resistance );
        led = 1;
        wait_ms(2000*resistance);

        
        led = 0;
        wait_ms(2000*(1 - resistance));
    }
}