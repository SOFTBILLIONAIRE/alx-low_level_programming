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
	unsigned int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
