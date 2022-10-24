#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - A function that prints all element.
 * @h: pointer to the address of the first node
 * Return: Allow success
*/
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
	}
	 while (h)
	{
		printf("%d\n", h->n);	  
	}
return (len);
}
