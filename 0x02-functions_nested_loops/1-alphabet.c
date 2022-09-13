#include "main.h"
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		putchar(b);
		b++;
		putchar('\n');
	}
return (0);
}
