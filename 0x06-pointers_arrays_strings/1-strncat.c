#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: Allow success
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != 0)
	{
		dest_len++;
	}
	i = 0;
	if (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	return (dest);
}
