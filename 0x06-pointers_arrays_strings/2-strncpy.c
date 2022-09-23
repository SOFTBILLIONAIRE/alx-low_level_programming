#include "main.h"
/**
 * _strncpy - a function that copies src to dest
 * @dest: first parameter
 * @src: second parameter
 * @n: number of byte
 * Return: Allow success
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
