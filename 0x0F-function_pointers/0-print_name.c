#include "function_pointers.h"
/**
 * print_name - A function that prints name
 * @name: first parameter
 * @f: second parameter
 * Return: Allow success
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}


