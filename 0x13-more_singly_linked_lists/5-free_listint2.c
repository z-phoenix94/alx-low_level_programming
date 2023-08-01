#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: listint_t
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *free_mem;

	if (*head == NULL || head == NULL)
	{
		return;
	}

	while (*head)
	{
		free_mem = *head;
		*head = (*(head))->next;
		free(free_mem);
	}
	*head = NULL;
}
