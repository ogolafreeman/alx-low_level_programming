#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to listint_t to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *cnt;

	if (head == NULL)
		return;
	while (*head)
	{
		cnt = (*head)->next;

		free(*head);
		*head = cnt;
	}
	*head = NULL;
}
