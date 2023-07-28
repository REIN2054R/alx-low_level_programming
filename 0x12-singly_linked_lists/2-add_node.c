#include "lists.h"

/**
 *add_node - add a node to the linked list
 *@head: head of the linked list
 *@str: the string that ze want to add
 *Return: @for he new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	if (!new)
		return (NULL);
	(*head) = new;
	return (new);
}
