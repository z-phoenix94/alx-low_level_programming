#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: listint_t list
 *
 * Return: returns head node's data, 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int m;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;

	if (*head)
	{
		*head = (*head)->next;
		m = (*head)->n;
		free(temp);
	}
	else
	{
		m = 0;
	}
	return (m);
}
