#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: array length
 * @c: characters in array
 * Return: char value
 */
char *create_array(unsigned int size, char c);
{
	int *a;
	int i;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	else
		return (a);
	
}
