#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: a parameter for the function
 * @src: a parameter for the function
*/
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
	 _putchar(dest[i]);
	}
	for (j = 0; ; j++)
	{
		*dest = _putchar(src[i]);
	}
return (*dest);
}
