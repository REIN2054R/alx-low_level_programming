#include "lists.h"


/**
 *list_len - count len of a struct
 *@h: the linked list
 *Return: count of nodes in linked list
*/

size_t list_len(const list_t *h)
{
	const list_t *head;
	size_t count;

	count = 0;
	head = h;
	if (!h)
		return (0);
	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
