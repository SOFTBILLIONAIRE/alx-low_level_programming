#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Allow success
*/
void more_numbers(void)
{
	int n;
	
	n = 0;
	while (n <= 9)
	{
		_putchar(n);
		n++;
	}
	if (n > 9)
	{
		while (n <= 14)
		{
			_putchar(n % 10 + '0')
				n++;
		}
	}
	_putchar('\n');
}
