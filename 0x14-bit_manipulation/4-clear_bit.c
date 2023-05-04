#include "main.h"
#include <stdio.h>
#include "2-get_bit.c"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to go through
 * @index: index to set value of bit
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) &= ~(1 << index);
	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
