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
	int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */

				int b;

				b = (n % 10);
					if (b > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, b);
				}
				else if (b == 0)
				{
					printf("Last digit of %d is 0 and is 0\n", n);
				}
				else if (b < 6)
				{
					printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, b);
				}

					return (0);
}

