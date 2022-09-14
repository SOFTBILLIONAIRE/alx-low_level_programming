#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	int c;
	int r = _islower(c);
	
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return (0);
	}
	return (0);
}
