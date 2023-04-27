#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a line
 * @head: doul pointer to the list_t list
 * @str: new string to add in a node
 *
 * Return: the address of new element or null if it fails
 */
list_t *add_node(list_t **head, const char *str)
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
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
