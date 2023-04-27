#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *store;

	while (head != NULL)
	{
		store = head->next;
		free(head->str);
		free(head);
		head = store;
	}
}
