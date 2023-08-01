#include "lists.h"

/**
 * listint_len - Retunns the number of
 * elments of a linked list
 * @h: listint_int list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
