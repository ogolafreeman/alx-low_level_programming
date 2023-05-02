#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of lintstint_t list
 * @head: pointer to a pointer to the first node  in the list
 * @n: the integer to be stored in the new node
 *
 * Return: if memory allocation falls or head is NULL, return NULL.
 * or else return the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ext;

	if (head == NULL)
		return (NULL);

	ext = malloc(sizeof(listint_t));
	if (ext == NULL)
		return (NULL);

	ext->n = n;
	ext->next = *head;
	*head = ext;

	return (ext);
}
