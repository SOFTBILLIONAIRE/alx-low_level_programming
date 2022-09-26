#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: first parameter
 * @b: second character
 * @n: third parameter
 * Return: Allow success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *p = &b;

	while (i < n)
	{
		s[i] = *p;
		i++;
	}
	_putchar('\n');
	return (s);
}