#include "main.h"
/**
 * print_numbers - a function that prints number from 0 t0 9
 *
 * Return: Allow success
*/
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
return;
}
