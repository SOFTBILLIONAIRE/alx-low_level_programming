#include "stdio.h"
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: defines the parameter for the function
 * @n: defines the parameter for the function
*/
void print_array(int *a, int n)
{
	int j;

	j = 0;
	while (j < n)
	{
		printf("%d", a[0]);
		if (j != (n - 1))
			{
			printf(", ");
			}
		j++;
	}
	printf('\n');
}
