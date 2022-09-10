#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		if (n > 0)
		{
			printf("%d is positive", 16);
}
		else if (n == 0)
		{
			printf("%d is zero", 0);
		}
		else if (n < 0)
		{
			printf("%d is negative", 16);
		}
			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					return (0);
}
