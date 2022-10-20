#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - A function that prints
 * @h: array that contains all the
 * Return: Allow success
*/
size_t print_list(const list_t *h)
{
	size_t count1 = 0;

	{
		if (h->name == NULL)
			printf("[0] (nil)\n");
		else
	printf("[%d] %s\n", h->len, h->name);
	count1++;
	h = h->next;
	}
return (count1);
}
