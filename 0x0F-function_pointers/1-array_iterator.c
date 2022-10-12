#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: first parameter
 * @size: second parameter
 * @action: third parameter
 * Return: Allow success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
