#include "lists.h"
/**
 * *add_nodeint_end - add a new node at the end of a listint_t list
 * @head: pointer to a pointer to the first mode in the list
 * @n: the int stored inn the new node.
 *
 * Return: if memory allocation fails or head is NULL return null
 * or else return the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ent;
	listint_t *ext = *head;

	ent = malloc(sizeof(listint_t));
	if (!ent)
		return (NULL);
	ent->n = n;
	ent->next = NULL;

	if (*head == NULL)
	{
		*head = ent;
		return (ent);
	}
	while (ext->next)
		ext = ext->next;

	ext->next = ent;

	return (ent);
}
