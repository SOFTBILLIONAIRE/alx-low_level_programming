#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @c: defines an integer
 * Return: Allow success
*/
int print_last_digit(int c)
{
	int b = c % 10;

	if (b < 0)
		b *= -1;

	_putchar(b + '0');
	return (b);
}
