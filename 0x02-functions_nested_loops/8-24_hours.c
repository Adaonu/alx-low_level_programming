#include "main.h"
/**
 * jack_bauer - function that prints
 * every minute, hours of jack Bauer
 *
 * Return: 0 always
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hour_remainder;
	int mins_remainder;

	while (hour <= 23)
	{
		while (minutes <= 59)
		{
			hours_remainder = hours % 10;
			_putchar(hour / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes /10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n')
		}
		hours++;
		minutes = 0;
	}

}
