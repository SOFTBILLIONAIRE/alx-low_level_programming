#include "main.h"
/**
 *  print_alphabet_x10 - Entry point
 *
 *  Return: Allow sucess
*/
void print_alphabet_x10(void)
{
	int n;
	char alp;

	n = 0;
	while (n < 10)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			putchar(alp);
			alp++;
		}
		putchar('\n');
			n++;
	}
	putchar('\n');
}
