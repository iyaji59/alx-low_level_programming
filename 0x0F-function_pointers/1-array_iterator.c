#include "function_pointers.h"
/**
 * array_iterator - execution a function on an array
 * @size: size of the array
 * @array: parameter array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		exit(98);
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
