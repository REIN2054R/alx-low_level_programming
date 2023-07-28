#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stddef.h>

/**
 *struct list_s - linked list
 *@str: a string
 *@len: the lengh of the string
 *@next: the next node on the linked list
*/


typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;

}		list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
