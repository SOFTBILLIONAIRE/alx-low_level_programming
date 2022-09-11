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
	int add;

	add = '0';
	while (add <= '9')
	{
		putchar(add);
		add++;
	}
	{
		putchar('\n');
	}
	return (0);
}
