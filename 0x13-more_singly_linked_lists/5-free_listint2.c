#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *len;

	if (head != NULL)
	{
		len = *head;
		while ((tmp = len) != NULL)
		{
			len = len->next;
			free(tmp);
		}
		*head = NULL;
	}
}
