#include "main.h"
/**
 * print line - a function that draws a straight line in the terminal
 * @n: defines the function parameter
 * Return: Allow success
*/
void print_line(int n)
{
	while (n <= 100)
	{
		if (n != 0 && n > 0)
			{
			_putchar('_');
			}
	}
	_putchar('\\');
	_putchar('n');
return;
}
