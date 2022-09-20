#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: defines the parameter for the function
 * Return: Allow success
*/
void rev_string(char *s)
{
	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
		i = 0;
		half = len / 2;

		while (half--)
		{
			temp = s[len - i - 1];
			s[len - i - 1] = s[i];
			s[i] = temp;
			i++;
		}
}


