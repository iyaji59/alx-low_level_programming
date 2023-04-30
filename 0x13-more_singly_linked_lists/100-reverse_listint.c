#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: head node of linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = v;
		v = *head;
		*head = next;
	}
	*head = v;
	return (*head);
}
