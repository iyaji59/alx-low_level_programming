#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of element in a list
 * @h: struct of linked list
 * Return: elements in linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}
