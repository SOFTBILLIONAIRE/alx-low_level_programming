#include "main.h"
/**
 * factorial - a function that returns the factorial of a number.
 * @n: parameter of the function
 * Return: Allow success
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
return (0);
}
