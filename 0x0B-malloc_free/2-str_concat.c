#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first parameter
 * @s2: second parameter
 * Return: Allow success
*/
char *str_concat(char *s1, char *s2)
{
	int i, count, count2, j;
	char *p;

	count = 0;
	for (i = 0; s1[i]; i++)
	{
		count++;
	}
	count2 = 0;
	for (i = 0; s2[i]; i++)
	{
		count2++;
	}
	p = malloc((count + count2 + 1) * sizeof(char));
		i = 0;
		while ( i <= count + count2)
		{
			if (i < count)
			{
				p[i] = s1[i];
			}
			if (i >= count && i < (count + count2))
			{
				for (j = 0; s[j] != '\0'; j++)
				{
				p[i] = s2[j];
				}
			}
			if (i == count + count2)
			{
				p[i] = '\0';
			}
			i++;
		}
		if (p == NULL)
		{
			return ('\0');
		}
		if (count == 0 && count2 == 0)
		{
			return (" ");
		}
return (p);
}
