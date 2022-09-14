#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet
 * @void: any character type
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
	{
	_putchar('\n');
	}
}
