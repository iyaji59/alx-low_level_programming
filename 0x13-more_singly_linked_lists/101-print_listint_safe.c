#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listp - freed list
 * @head: head node
 */
void free_listp(listp_t **head)
{
	listp_t *k;
	listp_t *b;

	if (head != NULL)
	{
		b = *head;
		while ((k = b) != NULL)
		{
			b = b->next;
			free(k);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head node of linked list
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t s = 0;
	listp_t *h, *new, *add;

	h = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = h;
		h = new;

		add = h;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h);
				return (s);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		s++;
	}

	free_listp(&h);
	return (s);
}
