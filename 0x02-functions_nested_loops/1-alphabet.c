#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Allow success
*/
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
		_putchar('\n');
}
