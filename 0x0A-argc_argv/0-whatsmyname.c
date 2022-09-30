#include "main.h"

int main(int argc, char* argv[])
{
	while (*argv[0] != '\0')
	{
		argv[0]++;
		_putchar(*argv[0]);
	}

return (0);
}
