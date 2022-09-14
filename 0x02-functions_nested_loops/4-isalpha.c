#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character.
 * @c: it is what we will use for the argument of the function
 * Return: Allow success
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

