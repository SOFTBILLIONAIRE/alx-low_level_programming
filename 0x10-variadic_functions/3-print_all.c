#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - A function that prints all kind of data type passed into it
 * @format: represents the set of data type passed into the function
 * Return: Allow success
*/
void print_all(const char * const format, ...)
{
	va_list printall;
	int i = 0, a = 0;
	char *str;

	va_start(printall, format);

	while (format[i] != '\0' && format != NULL)
	{
	switch (format[i])
	{
		case 'c':
		printf("%c", va_arg(printall, int));
		a = 0;
		break;
		case 'i':
		printf("%d", va_arg(printall, int));
		a = 0;
		break;
		case 'f':
		printf("%lf", va_arg(printall, double));
		a = 0;
		break;
		case 's':
		str = va_arg(printall, char *);
		if (str == NULL)
			printf("%s", str);
		else
			printf("(nil)");
		a = 0;
		break;
		default:
		a = 1;
	}
	if (format[i + 1] != '\0')
		printf(", ");
	i++;
	}
	printf("\n");
	va_end(printall);
}
