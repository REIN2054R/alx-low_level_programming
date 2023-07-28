#include "lists.h"

/**
 *print_list - print all element of a list
 *@h: the list name
 *Return: node nbr
*/

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t count;

	count = 0;
	tmp = h;
	while (tmp)
	{
		if (!(tmp->str))
			printf("[0] (nul)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
