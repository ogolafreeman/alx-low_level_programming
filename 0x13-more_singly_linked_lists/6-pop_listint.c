#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in thr linked list
 *
 * Return: data inside the elements that was deleted or
 * 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ext;
	int nmb;

	if (!head || !*head)
		return (0);

	nmb = (*head)->n;
	ext = (*head)->next;
	free(*head);
	*head = ext;

	return (nmb);
}
