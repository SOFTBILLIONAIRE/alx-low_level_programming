#include "main.h"
#include "stdio.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: first parameter
 * @c: second parameter
 * Return: Allow success
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
		return (s + i);
		}
		i++;
	}
	if (*(s + i) == '\0')
	{
		return (NULL);
	}
}
