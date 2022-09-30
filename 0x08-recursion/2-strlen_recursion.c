#include "main.h"
/**
 * _strlen_recursion - a function that prints the length of a string.
 * @s: a parameter for the function.
 * Return: Allow success.
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		return (0);
	}
	else
	{
		 _strlen_recursion(s + ++i);

	}
	return (i + 1);
}
