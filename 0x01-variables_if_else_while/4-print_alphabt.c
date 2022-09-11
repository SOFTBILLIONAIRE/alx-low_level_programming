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

	for (alp = 'a'; alp <= 'z' && (alp != 'q' && alp != 'e') ;  alp++)
	{
	putchar(alp);
	}
return (0);
}
