#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 * Return: Allow success
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

