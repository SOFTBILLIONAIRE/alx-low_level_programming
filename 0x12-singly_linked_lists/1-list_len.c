#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - A function that returns no of element.
 * @h: A pointer to the address of the first node
 * Return: Allow success
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while(h)
	{
		count++;
		h = h->next;
	}
return (count);
}
