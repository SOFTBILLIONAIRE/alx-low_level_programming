#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: a first parameter for the function
 * @src: a second parameter for the function
 * @n: a third parameter for the function
 * Return: Allow success
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
		i++;
	}
return (dest);
}
