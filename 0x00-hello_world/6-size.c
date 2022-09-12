#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Allow sucess
*/
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
		printf("Size of a int: %zu byte(s)\n", sizeof(b));
		printf("Size of a long: %zu byte(s)\n", sizeof(c));
		printf("Size of a long long: %zu byte(s)\n", sizeof(d));
		printf("Size of a float: %zu byte(s)\n", sizeof(e));

	return (0);
}
