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
	int x;
	listint_t *ext;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	ext = (*head)->next;
	*head = ext;

	return (x);
}
