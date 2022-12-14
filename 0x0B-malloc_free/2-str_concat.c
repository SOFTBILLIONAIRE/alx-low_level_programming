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
	int i, count = 0, count2 = 0, j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		count++;
	}
	for (i = 0; s2[i]; i++)
	{
		count2++;
	}
	p = malloc((count + count2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
		for (i = 0; i <= count + count2; i++)
		{
			if (i < count)
			{
				p[i] = s1[i];
			}
			if (i >= count && i < (count + count2))
			{
				for (j = 0; j < count2; j++)
				{
				p[i++] = s2[j];
				}
			}
			if (i == (count + count2))
			{
				p[i] = '\0';
			}
		}
		return (p);
}
