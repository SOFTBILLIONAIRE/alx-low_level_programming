#include "main.h"
/**
 * _strcmp - a function that compare two string
 * @s1: first parameter
 * @s2: second parameter
 * Return: Allow success
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
return (*s1 - *s2);
}
