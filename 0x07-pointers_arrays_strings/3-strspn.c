#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: Allow success
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
		if (s[i] == accept[i])
		{
			len++;  
			break;
		}
		else if (accept[i + 1] == '\0')
		{
			return (len);
		}
		}
	}
	return (len);
}
