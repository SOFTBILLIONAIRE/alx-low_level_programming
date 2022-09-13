#include "main.h"
/**
 * main - Entry point
 *
 * Return: Allow success
*/
void print_alphabet(void)
{
	char alp;
	
	alp = 'a';
	while (alp <= 'z')
	{ 
		_putchar(alp);
		alp++;
	}
		_putchar('\n');
}
