#include "main.h"
/**
 * swap_int - A function that swap the value of two integers
 * @a: define the first parameter
 * @b: define the second parameter
 * Return: Allow success
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
return;
}
