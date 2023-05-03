#include "lists.h"
/**
 * free_listint_safe - frees linked list
 * @h: pointer to the first node
 *
 * Return: number of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t sze = 0;
	int d;
	listint_t *ext;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			ext = (*h)->next;
			free(*h);
			*h = ext;
			sze++;
		}
		else
		{
			free(*h);
			*h = NULL;
			sze++;
			break;
		}
	}
	*h = NULL;

	return (sze);
}
