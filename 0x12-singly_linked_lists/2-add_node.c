#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list
 * @head: pointer to pointer of list_t lsit
 * @str: new node to be added
 *
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Node;
	unsigned int str_len = 0;

	while (str[str_len])
	{
		str_len++;
	}

	new_Node = malloc(sizeof(list_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_Node->str = strdup(str);
		new_Node->len = str_len;
		new_Node->next = (*head);
		(*head) = new_Node;
	}
	return (*head);
}
