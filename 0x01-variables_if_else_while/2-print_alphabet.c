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
	char alp;

	alp = 'a';
	while (alp <= 'Z')
	{
		putchar(alp);
		alp++;
	putchar('\n');
	}
		return (0);
}
