#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: defines a parameter for an integer
 * Return: Allow success
*/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < 10)
		{
			n = 0;
			while (n < 10)
			{
				_putchar('\\');
				n++;
			}
			_putchar(' ');
			_putchar('\n');
			i++;
		}
	}
		else if (n <= 0)
		{
			_putchar('\n');
		}
}
