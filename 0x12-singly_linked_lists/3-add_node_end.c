#include "lists.h"


/**
 *add_node_end - add node th the end of the linked list
 *@head: the head of the linked list that we want to add
 *@str: content of the linked
 *Return: @of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *tmp;
	list_t *new;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	tmp = (*head);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next  = new;
	return (new);
}
