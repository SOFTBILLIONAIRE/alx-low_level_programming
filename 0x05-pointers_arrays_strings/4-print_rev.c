#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse.
 * @s - defines the parameter for the function
 * Return: Allow success
*/
void print_rev(char *s)
{
	int i, j;

	int i = 0;
	while (s[i] =! '\0')
	{
		i++;
	}
	int i = i - 1;
	while (s[i] =! '\0')
	{
		_putchar(s[i]);
		i--
	}
	_putchar('\n');
}