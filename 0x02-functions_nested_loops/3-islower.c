#include "main.h"
/**
 * _islower(int c) - Entry point
 * @c: a function that checks for lowercase character
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

