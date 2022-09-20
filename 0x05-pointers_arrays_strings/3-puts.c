#include "main.h"
/**
 * _puts - A function that print a string
 * @str: defines the parameter
 * Return: Allow success
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
	}
}
