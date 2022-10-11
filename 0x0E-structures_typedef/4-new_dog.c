#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function that copies name and owner
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 * Return: Allow success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	p = malloc(sizeof(new_dog));
	if (p == NULL)
	{
		return (NULL);
	}
	else 
	{
	p->name = name;
	p->owner = owner;
	}
return (p);
}
