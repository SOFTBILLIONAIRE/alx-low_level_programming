#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: defines a parameter for an integer
 * Return: Allow success
*/
void print_diagonal(int n)
{
	int i, j, k;
	
	while (k < n)
	{
	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar('\\');
				j++;
			}
			_putchar(' ');
			i++;
		}
	}
		else if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
