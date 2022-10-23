#include "lists.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
/**
 * add_node - A function that add a new string.
 * @h: first parameter.
 * @str: new string.
 * Return: Allow success
*/
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t  *new_node;
	new_node = malloc(sizeof(list_t));
	head = &new_node;
	new_node->str = strdup(str);
	while (*str)
	{
		count++;
	}
	new_node->len = count;
return (new_node);
}
