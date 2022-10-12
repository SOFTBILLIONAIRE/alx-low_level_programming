#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 * Return: Allow success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
			break;
		}
		i++;
	}
return (-1);
}
