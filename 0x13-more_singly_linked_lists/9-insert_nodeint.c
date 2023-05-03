#include "lists.h"
/**
 * insert_nodeint_at_index - insterts a new node in a linked list
 * @head: pointer too he 1st node
 * @idx: index
 * @n: data to insert new mode;
 *
 * Return: pointer the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ent;
	listint_t *ext = *head;

	ent = malloc(sizeof(listint_t));
	if (!ent || !head)
		return (NULL);

	ent->n = n;
	ent->next = NULL;

	if (idx == 0)
	{
		ent->next = *head;
		*head = ent;
		return (ent);
	}

	for (x = 0; ext && x < idx; x++)
	{
		if (x == idx - 1)
		{
			ent->next = ext->next;
			ext->next = ent;
			return (ent);
		}
		else
			ext = ext->next;
	}

		return (NULL);
}
