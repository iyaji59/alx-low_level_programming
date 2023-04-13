#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: function parameter
 * Return: returns pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
