/**
 * @file port.h
 * @author Shoda Pratheep Kumar Reddy 255967
 * @brief header file
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef PORT_H_INCLUDED
#define PORT_H_INCLUDED
#define F_CPU 16000000UL  /**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

/**
 * @brief To set the required configurations.
 * 
 */
void port(void);
/**
 * @brief To blink the led when Both flags are 1.
 * 
 */
void led_blink();
#endif // PORT_H_INCLUDED
