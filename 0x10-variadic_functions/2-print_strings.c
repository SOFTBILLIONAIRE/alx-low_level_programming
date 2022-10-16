#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - A function that print strings
 * @separator: represent the string between the printed strings
 * @n: number of strings to be printed
 * Return: Allow success
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(string, char *);
		if ( str != NULL)
		{
		printf("%s", str);
		}
		else
			printf("nil");
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
