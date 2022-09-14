#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: a variable that allows integer
 * Return: 0
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

