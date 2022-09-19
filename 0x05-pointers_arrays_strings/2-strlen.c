#include "main.h"
/**
 * _strlen - A function that print the length of a string
 * @s: define the function parameter
 * Return: Allow success
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
return (count);
}	
