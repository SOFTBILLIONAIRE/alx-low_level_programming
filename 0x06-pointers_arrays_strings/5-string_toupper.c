#include "main.h"
/**
 * string_toupper - changes all lowercase
 * @s: string to modify
 * Return: Allow success
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
return (s);
}
