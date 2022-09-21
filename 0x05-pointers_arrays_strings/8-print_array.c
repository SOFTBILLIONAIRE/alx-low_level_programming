#include "stdio.h"
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: defines the parameter for the function
 * @n: defines the parameter for the function
*/
void print_array(int *a, int n)
{
	n = 0;
	while (a[n] != '\0' && n >= 0)
	{
		printf("%d", a[0]);
		n++;
	}
	_putchar('\n');
}
