#include "adc_to_duty.h"
#include "stdint.h"

int Transform(uint32_t value){
	float voltage = ((int)value / 4095.0) * 3.3;
	int duty = (2.5 + (voltage / 3.0) * 10) / 100.0 * 2000;
	return duty;
}
