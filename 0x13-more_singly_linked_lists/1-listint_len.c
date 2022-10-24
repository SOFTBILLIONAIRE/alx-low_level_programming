#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - A function that returns the number of elements.
 * @h: A pointer to the address of the first node
 * Return: Allow success
*/
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
	}
	return (len);
}
