#include "main.h"
/**
 * create_array - a function that create an array
 * @size: first parameter
 * @c: second parameter
 * Return: Allow success
*/
char *create_array(unsigned int size, char c)
{
	int *p;
	p = malloc(size * sizeof(char))
		if (size == 0)
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
