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
	int nd;
	listint_t *temp;
	listint_t *s;

	if (*head == NULL)
		return (0);

	temp = *head;
	nd = temp->n;
	s = temp->next;
	free(temp);
	*head = s;
	return (nd);

}
