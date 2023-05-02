#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain
 * index in a linked list
 * @head: first node in the list
 * @index: indes of node.
 *
 * Return: pointer to the node being looked for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	list_t *ext = head;

	while (ext && x < index)
	{
		ext = ext->next;
		x++;
	}

	return (ext ? ext : NULL);
}
