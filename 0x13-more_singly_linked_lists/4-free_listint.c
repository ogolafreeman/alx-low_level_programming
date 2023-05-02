#include "lists.h"
/**
 * free_listint - frees a list_t list
 * @head: pointer to the 1st node in the list
 *
 * Return: Always nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ext;

	while (head != NULL)
	{
		ext = head;
		head = head->next;
		free(ext);
	}
}
