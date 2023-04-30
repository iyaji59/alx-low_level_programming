#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: head of the linked list
 * @index: index of the node
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	for (b = 0; b < index && head != NULL; b++)
	{
		head = head->next;
	}
	return (head);
}
