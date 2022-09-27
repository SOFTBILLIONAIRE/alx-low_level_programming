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

	for (i = 0; ; i++)
	{
		if (*(s + i) == c)
		{
		return (s - 1);
		}
		if (*(s + i) == 0)
		{
		return (NULL);
		}
	}
}
