#include "stdio.h"
/**
 * main - a function
 * @argc: argument count
 * @argv: argument vector
 * Return: Allow success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
			i++;
	}
return (0);
}
