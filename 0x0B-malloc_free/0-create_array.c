#include "main.h"
#include "stdlib.h"
/**
 * *create_array - a function that create an array
 * @size: first parameter
 * @c: second parameter
 * Return: Allow success
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(size * sizeof(char));
		if (size == 0)
		{
			return('\0');
		}
		if (p == NULL)
		{
			return('\0');
		}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
