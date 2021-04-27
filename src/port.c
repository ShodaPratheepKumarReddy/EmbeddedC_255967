
#include "port.h"
void port()
{
    DDRB |=(1<<PB0);
    DDRD &=~(1<<PD2) & ~(1<<PD3);
    PORTD |=(1<<PD2) |(1<<PD3);
    EICRA |=(1<<ISC00)|(ISC10);
    EIMSK |=(1<<INT0) |(1<<INT1);  //INT0 for seat button and INT1 for heat button
    sei();
}
