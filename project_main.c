/**
 * @file main.c
 * @author 255967 Shoda Pratheep Kumar Reddy
 * @brief  Seat Heating Application
 * @brief when both seat and heat button are ON then we are going to read the analog value from the sensor.
 * @brief Then we are Converting Analog value to Digital value.
 * @brief Then generating PWM wave form with their respective duty cycle.And displaying the respective temperature.
 * @version 0.1
 * @date 2021-04-28
 *
 * @copyright Copyright (c) 2021
 *
 */
#include "Activity4.h"

int main(void)
{
    peripheral_init();
    peripheral_init_ADC();
    peripheral_init_pwm();
    peripheral_init_usart(103);
    uint16_t digital_temp_value=0;
    while(1)
    {
        if(SeatButton_ON) //Checking Seat Button is ON or OFF.
        {
            if(HeaterButton_ON)  //Checking Heater Button is ON or OFF.
            {                     //If both are ON  then enter into this if loop.
                change_led_state(LED_ON);
                delay(LED_ON_TIME);
                change_led_state(LED_OFF);
                delay(LED_OFF_TIME);


                while(1)
                {
                   digital_temp_value=ReadADC(0); //Analog to Digital Conversion.
                   generate_pwm(digital_temp_value);  //Generating the respective PWM wave form.
                   uart_transmit(digital_temp_value);    //Transmiting the Temperature value using UART protocol.
                }
            }
        }
        else
        {
            change_led_state(LED_OFF);
            delay(LED_OFF_TIME);
        }
    }
    return 0;
}


