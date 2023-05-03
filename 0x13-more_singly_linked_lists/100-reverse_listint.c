#inluce "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the 1st node
 *
 * Return: pointer to the 1st node;
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *yes = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = yes;
		yes = *head;
		*head = next;
	}

	*head = yes;

	return (*head);
}
