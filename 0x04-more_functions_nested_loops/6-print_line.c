#include "main.h"
/**
 * print line - a function that draws a straight line in the terminal
 * @n: defines the value of the integer
 * Return: Allow success
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}

