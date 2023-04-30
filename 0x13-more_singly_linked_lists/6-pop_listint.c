#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - removes head of linked list
 * @head: pointer to head address
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	int nd = 0;
	listint_t *temp;

	if (*head == NULL)
		return (nd);
	temp = *head;
	nd = temp->n;
	free(*head);
	*head = temp->next;

	return (nd);
}
