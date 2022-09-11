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
	char qe;

	qe = 'a';
	while (qe != 'q' && qe != 'e' && qe <= 'a' <= 'z')
	{
		putchar(qe);
		qe++;
	}
	{
		putchar('\n');
	}
	return (0);
}
