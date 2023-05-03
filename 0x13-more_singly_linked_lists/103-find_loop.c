#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *toto = head;
	listint_t *flash = head;

	if (!head)
		return (NULL);
	while (toto && flash && flash->next)
	{
		flash = flash->next->next;
		toto = toto->next;
		if (flash == toto)
		{
			toto = head;
			while (toto != flash)
			{
				toto = toto->next;
				flash = flash->next;
			}
			return (flash);
		}
	}
	return (NULL);
}

