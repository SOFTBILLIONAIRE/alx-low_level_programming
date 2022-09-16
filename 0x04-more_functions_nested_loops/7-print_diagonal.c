#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: defines a parameter for an integer
 * Return: Allow success
*/
void print_diagonal(int n)
{
	if (n <= 0 && n >= 0)
	{
		n = 0;
		while (n >= 0)
		{
			n = 0;
			while (n > 0)
			{
				_putchar('\\');
				n++;
			}
			_putchar(' ');
			_putchar('\n');
			n++;
		}
	}
		else if (n <= 0)
		{
			_putchar('\n');
		}
	return;
}
