#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listp2 - frees a linked list
 * @head: head node of linked list
 * Return: no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - frees a linked list.
 * @h: head node of linked list
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nd = 0;
	listp_t *t, *new, *add;
	listint_t *curr;

	t = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = t;
		t = new;

		add = t;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&t);
				return (nd);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nd++;
	}

	*h = NULL;
	free_listp2(&t);
	return (nd);
}
