#include "main.h"
#include <stdio.h>
/**
 * _abs -  a function that computes the absolute value of an integer.
 * @c: defines an integer
 * Return: Allow success
*/
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
	return (0);
}
