#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function
 * @str: parameter for the function
 * Return: Allow success
*/
char *_strdup(char *str)
{
	char *p;
	int i = 0, count = 0;

	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	p = malloc((count + 1) * sizeof(char));
		if (str == NULL)
		{
			return ('\0');
		}
		if (p == NULL)
		{
			return ('\0');
		}
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	p[count] = '\0';
	return (p);
}
