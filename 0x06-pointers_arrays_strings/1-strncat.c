#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 * return: Allow successi
*/
char *_strncat(char *dest, char *src, int n)
{
	int dex_len, i;

	dex_len = 0;
	while (dest[dex_len] != '\0')
	{
		dex_len++;
	}
	i = 0;
	while (i < n)
	{
		dest[dex_len] = src[i];
		dex_len++;
	}
	dest[dex_len] = '\0';
return (dest);
}
