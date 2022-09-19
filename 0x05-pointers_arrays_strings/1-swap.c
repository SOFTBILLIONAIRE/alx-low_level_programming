#include "main.h"
/**
 * swap_int - A function that swap the value of two integers
 * @a: define the first parameter
 * @b: define the second parameter
 * Return: Allo success
*/
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
	return;
}
