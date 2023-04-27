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
	list_t *n;
	unsigned int x = 0;

	while (str[x])
		x++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->x = x;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
