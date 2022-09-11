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
	int b;
	int c;

	b = '0';
	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	c = 'a';
		while (c <= 'f')
		{
			putchar(c);
			c++;
		}
	{
		putchar('\n');
	}
	return (0);
}
