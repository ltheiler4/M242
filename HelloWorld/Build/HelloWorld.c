#include <avr\io.h>
#include <Atmega328P.h>
#include <avrlib.h>
#define F_CPU 16000000
#include <util\delay.h>
#include <inttypes.h>

int main(void)
{
	Usart_Init(250000);
	
	while (True)
	{
		Usart_Trace0(1);
		_delay_ms(1000);
	}
	return 0;
}