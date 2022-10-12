#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 * Return: Allow success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int x;
	
	if (array == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (x == cmp(array[i]))
			break;
		i++;
	}
return (i);
}
