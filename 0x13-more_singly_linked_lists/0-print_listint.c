#include "lists.h"

/**
 * print_list - prints all the elements of linked list
 * @h: linked list of type listint_t print
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h-.n);
		cnt++;
	}

	return (cnt);
}
