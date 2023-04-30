#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: head node of linked list
 * @idx: index to insert a node
 * @n: index value
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *k;
	listint_t *b;

	b = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && b != NULL; i++)
		{
			b = b->next;
		}
	}
	if (b == NULL && idx != 0)
		return (NULL);
	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	if (idx == 0)
	{
		k->next = *head;
		*head = k;
	}
	else
	{
		k->next = b->next;
		b->next = k;
	}
	return (k);
}
