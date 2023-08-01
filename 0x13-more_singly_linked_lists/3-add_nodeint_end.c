#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: listint_t list
 * @n: data of a node
 *
 * Return: Address of new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_Node;
	listint_t *temp;

	last_Node = malloc(sizeof(listint_t));
	temp = *head;

	last_Node->n = n;
	last_Node->next = NULL;

	if (*head == NULL)
	{
		*head = last_Node;
		return (last_Node);
	}
	if (last_Node == NULL)
	{
		temp->next = NULL;
		temp->n = n;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last_Node;
	return (last_Node);
}
