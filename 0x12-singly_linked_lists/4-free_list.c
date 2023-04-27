#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: list_t to be freed
 */
void free_list(list_t *head)
{
	list_t *n = head;

	while (n != NULL)
	{
		list_t *temp = n;

		n = n->next;
		free(temp);
	}
}
