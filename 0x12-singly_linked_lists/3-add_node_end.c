#include "lists.h"

/**
 * add_node_end - adds node at the end of a lsit
 * @head: pointer to pointer of list_t list
 * @str: string to be added
 *
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_Node;
	list_t *temp;
	unsigned int str_len = 0;

	while (str[str_len])
	{
		str_len++;
	}

	end_Node = malloc(sizeof(list_t));
	temp = *head;

	end_Node->str = strdup(str);
	end_Node->len = str_len;
	end_Node->next = NULL;

	if (*head == NULL)
	{
		*head = end_Node;
		return (end_Node);
	}
	if (end_Node == NULL)
	{
		return (NULL);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end_Node;
	return (end_Node);
}
