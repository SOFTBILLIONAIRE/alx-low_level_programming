#include "variadic_functions.h"
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
		result = result + va_arg(sum, int);
	}
	va_end(sum);
return (result);
}
