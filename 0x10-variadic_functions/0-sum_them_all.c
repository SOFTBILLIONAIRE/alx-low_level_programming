#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all parameters
 * @n: number of values to be summed
 * Return: Allow success
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int result, i = 0;

	va_start(sum, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum, const unsigned int);
	_putchar(result + '0');
	}
	va_end(sum);
return (result);
}
