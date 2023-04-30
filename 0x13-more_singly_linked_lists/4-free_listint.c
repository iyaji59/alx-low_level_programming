#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list
 * @head: first node
 */
void free_listint(listint_t *head)
{
	listint_t *free_list;

	while (head != NULL)
	{
		free_list = head;
		free(head);
		head = free_list->next
	}
}
