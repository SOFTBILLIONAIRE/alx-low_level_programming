#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: first parameter
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 * Return: Allow success
*/
init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(init_dog));
			d->name = name;
			d->age = age;
			d->owner = owner;
return (d);
}