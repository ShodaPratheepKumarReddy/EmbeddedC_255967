/**
 * @file project_main.c
 * @author Shoda Pratheep Kumar Reddy 255967
 * @brief Project to Blink an LED when both seat button and heater button are ON. 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "port.h"
int main(void)
{
    port();
    while(1)
    {
        led_blink();
    }
    return 0;
}