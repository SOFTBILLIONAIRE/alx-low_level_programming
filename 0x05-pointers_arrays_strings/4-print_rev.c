#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse.
 * @s - defines the parameter for the function
 * Return: Allow success
*/
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
}
