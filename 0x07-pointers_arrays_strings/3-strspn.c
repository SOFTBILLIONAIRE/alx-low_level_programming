#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: Allow success
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c, len;

	len = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
		if (s[i] == accept[j])
		{
			c = len++;
			break;
		}
		else if (s[i] == '\0')
		{
		return (len);
		}
		}
	}
	return (c);
}

