#include "lists.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
/**
 * add_node - A function that add a new string.
 * @head: first parameter.
 * @str: new string.
 * Return: Allow success
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (*str)
	{
		count++;
	}
	new->str = strdup(str);
	new->len = count;
	new->next = *head;
	*head = new;
return (new);
}
