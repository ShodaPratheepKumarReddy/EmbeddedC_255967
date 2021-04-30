#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/**
 * @file Activity2.h
 * @author 255967 Shoda Pratheep Kumar Reddy
 * @brief Analog to digital Conversion
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity1.h"
/**
 * @brief To initialize the ADC peripherals
 * 
 */
void peripheral_init_ADC();
/**
 * @brief 
 * 
 * @param[in] ch It will tell the software that for which channel the sensor is physically connected.
 * 
 * @return Return Digital value for the analog value read by the sensor. 
 */
uint16_t ReadADC(uint8_t );

#endif // ACTIVITY2_H_INCLUDED
