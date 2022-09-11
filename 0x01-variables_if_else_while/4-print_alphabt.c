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
	char alp;

	for (alp = 'a'; alp = 'a' - 'z' && (alp != 'q' || alp != 'e');  alp++)
	{
	putchar(alp);
	}
	{
		putchar('\n');
	}
return (0);
}
