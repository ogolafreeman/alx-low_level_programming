#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ext = *head;
	listint_t *cnt = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ext);
		return (1);
	}

	while (x < index - 1)
	{
		if (!ext || !(ext->next))
			return (-1);
		ext = ext->next;
		x++;
	}
	cnt = ext->next;
	ext->next = cnt->next;
	free(cnt);

	return (1);
}
