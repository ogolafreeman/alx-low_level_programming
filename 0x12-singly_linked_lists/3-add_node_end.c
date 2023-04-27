#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the end of the linked list
 * @head: a pointer to the head of the list
 * @str: added string string to the new node
 *
 * Return: if memory allocation fails, Null otherwise.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = strlen(str);
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		list_t *l_node = *head;

		while (l_node->next != NULL)
			l_node = l_node->next;
		l_node->next = n_node;
	}

	return (n_node);
}
