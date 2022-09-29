#include "main.h"
/**
 * _puts_recursion - a function that prints a string followed by a new line
 * @s: parameter of the function
 * Return: Allow success
*/
void _puts_recursion(char *s)
{
	int i = 0:

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		return (_puts_recursion(*s++);
	}
}
