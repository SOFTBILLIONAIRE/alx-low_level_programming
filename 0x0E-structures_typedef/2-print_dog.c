#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints struct dog
 * @d: first parameter
 * Return: Allow success
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		 printf("Owner: %s\n", d->owner);
}
