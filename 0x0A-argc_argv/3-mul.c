#include "stdio.h"
/**
 * main - a function
 * @argc: first parameter
 * @argv: second parameter
 * Return: Allow success
*/
int main(int argc, char *argv[])
{
	int n;
	if (argc == 3)
	{
		n = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", n);
	}
	else
	{
		printf("Error\n");
	}
return (0);
}
