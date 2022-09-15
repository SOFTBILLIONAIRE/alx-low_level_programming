#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		/* i++ for increament */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
