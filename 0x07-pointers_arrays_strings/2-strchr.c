#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: first parameter
 * @c: second parameter
 * Return: Allow success
*/
char *_strchr(char *s, char c)
{
	for (i = 0; *s != '\0'; i++;
			{
			if (*(s + i) == c)
			{
			return (s);
			}
			else
			{
			return (NULL);
			}

}
