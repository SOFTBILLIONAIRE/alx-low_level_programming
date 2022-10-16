#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that print numbers
 * @separator: first parameter
 * @n: second parameter
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (separator != NULL && i != (n - 1))
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print);
}


