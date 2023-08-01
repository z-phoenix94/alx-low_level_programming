#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: list_t list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *next_ptr;

	while (head)
	{
		next_ptr = head->next;
		free(head->str);
		free(head);
		head = next_ptr;
	}
}
