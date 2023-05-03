#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the numberof unique nodes in a looped
 * lintint_t linked
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: if the list is not looped - 0, or else
 * the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *optimus, *megatron;
	size_t sentinel;

	if (head == NULL || head->next == NULL)
		return (0);

	optimus = head->next;
	megatron = (head->next)->next;

	while (megatron)
	{
		if (optimus == megatron)
		{
			optimus = head;
			while (optimus != megatron)
			{
				sentinel++;
				optimus = optimus->next;
				megatron = megatron->next;
			}

			optimus = optimus->next;
			while (optimus != megatron)
			{
				sentinel++;
				optimus = optimus->next;
			}

			return (sentinel);
		}
		optimus = optimus->next;
		megatron = (megatron->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t list safely
 * @head: pointer to the head
 *
 * Return: the number of nodesin list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nde, ind = 0;

	nde = looped_listint_len(head);

	if (nde == 0)
	{
		for (; head != NULL; nde++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < nde; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nde);
}
