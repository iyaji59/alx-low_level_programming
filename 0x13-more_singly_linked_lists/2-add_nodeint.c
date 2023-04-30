#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add new node at the beginning of a listint_t list
 * @head: start of node
 * @n: new node
 * Return: address of new elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
