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
	int i, count, count2;
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
		while ( i <= count + count2)
		{
			if (i < count)
			{
				p[i] = s1[i];
			}
			if (i >= count && i < (count + count2))
			{
				p[i] = s2[i];
			}
			i++;
			if (i == count + count2)
			{
				p[i] = '\0';
			}
			return (p);
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
