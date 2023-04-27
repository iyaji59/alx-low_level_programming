#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: first node
 * @str: string to duplicate
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int k = 0;

	while (str[k])
		k++;
	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}
	n->str = strdup(str);
	n->len = k;
	n->next = *head;

	*head = n;

	return (n);
}
