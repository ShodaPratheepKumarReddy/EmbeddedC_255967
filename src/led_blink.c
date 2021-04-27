#include "port.h"
unsigned volatile FLAG_1=0;
unsigned volatile FLAG_2=0;
void led_blink()
{
    if(FLAG_1 ==1){
        if(FLAG_2==1){    //IF BOTH BUTTONS ARE ON THEN LED ACTUATOR WILL ON
            PORTB |=(1<<PB0);
            _delay_ms(500);
            FLAG_2=0;
        }
        FLAG_1=0;
    }
    else{
        PORTB &=~(1<<PB0);
        _delay_ms(20);
    }
}

ISR(INT0_vect){
FLAG_1=1;
}

ISR(INT1_vect){
FLAG_2=1;
}
