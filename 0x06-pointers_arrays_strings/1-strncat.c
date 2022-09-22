#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
*/
char *_strncat(char *dest, char *src, int n)
{
	char *tempdest = dest, *srcdest = src;

	while(*tempdest)
	{
		*tempdest++;
	}
	while(*srcdest <= *(srcdest + n))
	{
		*tempdest = *srcdest;
		*tempdest++;
	}
return (dest);
}
