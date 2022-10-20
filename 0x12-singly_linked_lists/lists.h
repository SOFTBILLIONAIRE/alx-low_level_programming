#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
/**
 * struct list - A new data type
 * @name: first parameter
 * @len: second parameter
 * @next: third parameter
 * Return: Allow success
 * Description: singly linked node structure
*/
typedef struct list
{
	char *name;
	unsigned int len;
	struct list *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
