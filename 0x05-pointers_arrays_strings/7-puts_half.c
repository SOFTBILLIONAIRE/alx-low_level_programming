#include "main.h"
/**
 * puts_half -  a function that prints half of a string
 * @str: a parameter for the function
 * Return: Allow success
*/
void puts_half(char *str)
{
	int i, c;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		c = (i - 1) / 2;
		c = c + 1;
	}
	else
	{
		c = i / 2;
	}
	for (; c < i; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

