#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
/**
 * @file Activity3.h
 * @author 255967 Shoda Pratheep Kumar Reddy
 * @brief To generate the respective Pulse width modulation wave of the converterd ADC value.
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity2.h"
/**
 * @brief To initialize the PWM peripherals.
 * 
 */
void peripheral_init_pwm();
/**
 * @brief To Generate the PWM wave form.
 * 
 */
void generate_pwm(uint16_t );


#endif // ACTIVITY3_H_INCLUDED
