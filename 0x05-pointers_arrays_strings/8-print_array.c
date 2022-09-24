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
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

