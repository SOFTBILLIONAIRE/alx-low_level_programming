#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: Allow success
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
		if (s[i] == accept[j])
		{
			len++;
			break;
		}
		else 
		{
		return (len);
		}
		}
	}
	return (len);
}
