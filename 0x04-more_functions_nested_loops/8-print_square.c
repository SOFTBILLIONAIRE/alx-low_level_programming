#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size - defines the parameter for the function
 * Return: Allow success
*/
void print_square(int size)
{
	int l, h;

	if (size > 0)
	{
		while (l <= size)
		{
			while (h <= l)
			{
				_putchar('#');
				h++;
			}
			_putchar('\n');
			l++;
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
