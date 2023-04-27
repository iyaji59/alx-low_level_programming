#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to first node
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
