#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - a function that free dogs
 * @d: parameter of the function
 * Return: Allow success
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
