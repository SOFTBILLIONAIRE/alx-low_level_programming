#include "main.h"
/**
 * reset_to_98 - A function that take a pointer to an int and update the value it points to 98
 * @*n: define the parameter for the function
 * Return: Allo success
*/
void reset_to_98(int *n)
{
	int p;

	p = 98;
	n = &p;
return;
}
