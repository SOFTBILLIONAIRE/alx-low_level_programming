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
	int i = 0;
	char *str;

	va_start(printall, format);
	
	while (format[i] != '\0' && format != NULL)
	{
	switch(format[i])
	{
		case 'c':
		printf("%c", va_arg(printall, int));
		break;
		case 'i':
		printf("%d", va_arg(printall, int));
		break;
		case 'f':
		printf("%lf", va_arg(printall, double));
		break;
		case 's':
		str = va_arg(printall, char *);
		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		break;
	}
	i++;
	}
	printf("\n");
}
