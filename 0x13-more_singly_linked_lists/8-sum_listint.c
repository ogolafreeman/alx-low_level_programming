#include "lists.h"
/**
 * sum_listint - calculates the sum of all the records in listint_t
 * @head: 1st node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *ext = head;

	while (ext)
	{
		x += ext->n;
		ext = ext->next;
	}
	return (x);
}
