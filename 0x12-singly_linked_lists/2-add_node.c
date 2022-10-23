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
	new = malloc(sizeof(list_t));
	*head = new;
	int count = 0;
	char *dup = strdup(str);

	if (new == NULL)
		return (NULL);
	while (*str)
	{
		count++;
	}
	new->str = dup;
	new->len = count;
	new->next = *head;
return (new);
}
