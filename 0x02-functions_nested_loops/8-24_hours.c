#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack.
 * n from 00:00 to 23:59
 * Return: Allow success
*/
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int hr;
	int mr;

	while (h <= 23)
	{
		while (m <= 59)
		{
			mr = m % 10;
			hr = h % 10;
			_putchar(h / 10 + '0');
			_putchar(hr + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(mr + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}

