#include "mbed.h"
 
DigitalIn button1(D1);
DigitalIn button2(D2);
DigitalIn button3(D3);
DigitalIn button4(D4);
DigitalOut rele(D5);
DigitalOut led(LED1);
bool pass = 0;
int main()
{
    button1.mode(PullUp);
    button2.mode(PullUp);
    button3.mode(PullUp);
    button4.mode(PullUp);
    while(1) {
        if (button1 == 0) {
            pass = !pass;
}
//PART2
if (pass == true){
    rele = !rele;
    for(int i=0; i<10; i++)     {
          wait_ms(1000); // 1 second
          led = !led; // Toggle LED
          }
    rele = !rele;
}
}//while
}//main

