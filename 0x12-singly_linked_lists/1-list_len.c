#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: pointer to struct list
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_el = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			num_el = 0;
		}
		else
		{
			h = h->next;
			num_el++;
		}
	}
	return (num_el);
}
