#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
char _strcpy(char *dest, char *src);
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
	int len;
	int i;

	p = malloc(sizeof(new_dog));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
/**
 * _strlen - a function that finds the length of a string
 * @str: parameter of the function
 * Return: Allow success
*/
	int _strlen(char *str)
	{
		len = 0;
		while (*str != '\0')
		{
			len++;
			str++;
		}
		return (len);
	}
/**
 * _strcpy - a function that copies string
 * @dest: dest var
 * @src: source var
 * Return: Allow success
*/
	char *_strcpy(char *dest, char *src)
	{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*src = '\0';
	return (dest);
	}
	p->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (p->name == NULL)
	{
		free(p->name);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (p->owner == NULL)
	{
		free(p->owner);
		return (NULL);
	}
	p->name = _strcpy(p->name, name);
	p->age = age;
	p->owner = _strcpy(p->owner, owner);
	return (p);
}
