#include "main.h"
/**
 *  _islower - Entry point
 *
 * Return: Allow success
*/
int _islower(int c)
{
	if (c >= 1 && c <=127)
		return (1);
	else
		return (0);
}
