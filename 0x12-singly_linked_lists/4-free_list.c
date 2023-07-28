#include "lists.h"

/**
 *free_list - free a linked list
 *@head: the ehad of the linked list
*/

void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		if (head->str)
			free(head->str);
		free(head);
		head = tmp->next;
	}
}
