#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Rerturn: Allow success
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i];
		for (j = 0; accept[j] != '\0'; j++)
		{
			accept[j];
		if (s[i] == accept[j])
		{
			c = len++;
		}
		break;
		}
		return (c);
	}
	return (0);
}
		

