#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end
 * @head: first node
 * @str: string to add
 * Return: return main
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *f;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = new;
		return (new);
	}
}
