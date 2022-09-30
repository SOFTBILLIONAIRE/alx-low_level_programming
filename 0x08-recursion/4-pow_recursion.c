#include "main.h"
/**
 * _pow_recursion - a function that return
 * @x: first parameter
 * @y: second parameter.
 * Return: Allow success.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));

	}
return (0);
}

