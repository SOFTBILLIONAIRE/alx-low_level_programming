#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse.
 * @s - defines the parameter for the function
 * Return: Allow success
*/
void print_rev(char *s)
{
	int i, j = 0;

	while (*s != '\0')
	{
		j = i++;
		s++;
	}
	while (j > 0)
	{
		_putchar(*s);
		j--;
	}
	_putchar('\n');
}
