#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: defines a parameter for an integer
 * Return: Allow success
*/
void print_diagonal(int n)
{
	n = '0';
	if (n <= '0')
			{
			_putchar('\\');
			_putchar('\n');
			}
	while (n >= '0')
	{
		for (n = '0'; n >= '0'; n++)
		{
			_putchar('\\');
			_putchar('\n');
		}
		_putchar(' ');
	}
return;
}
