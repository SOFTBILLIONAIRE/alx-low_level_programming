#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: a parameter for the function
 * @src: a parameter for the function
*/
char *_strcat(char *dest, char *src)
{
	char dest_index, src_index, i;

	for (dest_index = 0; dest[dest_index] != '\0'; dest_index++)
	{
		dest_index;
	}
	for (src_index = 0; src[src_index] != '\0'; src_index++)
	{
		src_index;
	}
	for (i = 0; i < src_index; i++)
	{
		dest[dest_index] = src[i];
	}
	dest[dest_index] = '\0';
return (dest);
}