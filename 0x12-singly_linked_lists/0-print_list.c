#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - A function that prints all elements of list_t
 * @h: array that contains all the members.
 * Return: Allow success
*/
size_t print_list(const list_t *h)
{
	size_t count, count1 = 0;

	while (h->name)
	{
		count++;
	}
	while(h->next != NULL)
	{
	printf("%s\n", h->name);
	printf("%d\n", h->count);
	count1++;
	}
return (count1);
}
