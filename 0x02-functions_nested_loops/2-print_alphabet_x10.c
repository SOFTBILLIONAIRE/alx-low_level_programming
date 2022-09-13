#include "main.h"
/**
 *  print_alphabet_x10 - Entry point
 *
 *  Return: Allow sucess
*/
void print_alphabet_x10(void)
{
	char i;
	char alp;

	i = 0;
	while (i < 10)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		i++;
	}
}
