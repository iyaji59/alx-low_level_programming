#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n)
 * @head: head node of linked lists
 * Return: returns sum
 */
int sum_listint(listint_t *head)
{
	int add_data;

	add_data = 0;
	while (head != NULL)
	{
		add_data += head->n;
		head = head->next;
	}
	return (add_data);
}
