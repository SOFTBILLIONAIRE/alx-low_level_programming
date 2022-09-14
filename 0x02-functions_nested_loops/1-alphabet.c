#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Allow success
*/
char alp;
void print_alphabet(void)
{
	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
		_putchar('\n');
}
