#include <msp430.h>;
#include "clock_calibrate.h;
void calibrateClock(char frequency) {
	DCOCTL = 0; // Select lowest DCOxand MODx settings
	switch (frequency) {

	case 1:
		BCSCTL1 = CALBC1_1MHZ;
		DCOCTL = CALDCO_1MHZ;
		break;

	case 8:
		BCSCTL1 = CALBC1_8MHZ;
		DCOCTL = CALDCO_8MHZ;
		break;

	case 12:
		BCSCTL1 = CALBC1_12MHZ;
		DCOCTL = CALDCO_12MHZ;
		break;

	case 16:
		BCSCTL1 = CALBC1_16MHZ;
		DCOCTL = CALDCO_16MHZ;
		break;

	}

}