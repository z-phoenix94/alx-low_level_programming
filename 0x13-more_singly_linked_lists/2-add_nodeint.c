#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * of a list
 * @head: listint_t list
 * @n: data of a node
 *
 * Return: Address of the new node, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_Node;

	first_Node = malloc(sizeof(listint_t));

	if (first_Node == NULL)
	{
		return (NULL);
	}

	first_Node->n = n;
	first_Node->next = (*head);
	(*head) = first_Node;

	return (*head);
}
