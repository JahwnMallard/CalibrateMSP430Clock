/*
 * Author: C2C John Miller
 * Library to calibrate the clock of the MSP430 to either 1, 8, 12, or 16 MHz
 */

#ifndef CLOCK_CALIBRATE_H_
#define CLOCK_CALIBRATE_H_

/*---------------------------------------------------
 Subroutine Name: calibrateClock
 Author: C2C John Miller, USAF
 Function: calibrates clock of the MSP430 to 1, 8 12  or 16 MHz
 Inputs:frequency (must be 1, 8, 12, or 16)
 Outputs: none
 Subroutines used: none
 ---------------------------------------------------*/
void calibrateClock(char frequency);