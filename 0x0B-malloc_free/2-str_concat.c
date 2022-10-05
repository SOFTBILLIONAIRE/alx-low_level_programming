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
	int j;

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
		if (p == NULL)
		{
			return ('\0');
		}
	if(count == 0 && count2 == 0)
	{
		return ('\0');
	}
		for (i = 0; i < count; i++)
		{
			p[i] = s1[i];
		}
		j = count;
		i = 0;
	while (i < count2 + count)
	{
		p[j] = s2[i];
		j++;
		i++;
	}
	p[count + count2 - 1] = '\0';
	return (p);
}
