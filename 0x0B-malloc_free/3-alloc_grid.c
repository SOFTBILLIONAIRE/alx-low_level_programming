#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a two dimensional array
 * @width: first parameter
 * @height: second parameter
 * Return: Allow success
*/
int **alloc_grid(int width, int height)
{
	int **p, j, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	*p = malloc(width * height * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				p[i][j] = 0;
			}
		}

	return (p);
}
