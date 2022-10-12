#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function as parameter given as an array
 * @array: first parameter
 * @size: second parameter
 * @action: third parameter
 * Return: Allow success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
