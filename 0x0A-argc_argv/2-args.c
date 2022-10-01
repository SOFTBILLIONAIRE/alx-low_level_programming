#include "stdio.h"
/**
 * main - a function
 * @argc: argument count
 * @argv: argument vector
 * Return: Allow success
*/
int main(int argc, char *argv[])
{
	while(*argv != argv[argc])
	{
		printf("%s\n", *argv);
			argv++;
	}
return (0);
}
