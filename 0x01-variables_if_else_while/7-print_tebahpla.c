#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	char rev;

	rev = 'z';
		while ('a' <= rev);
		{
			putchar(rev);
			++rev;
		}
	{
		putchar('\n');
	}
	return (0);
}
