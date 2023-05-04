#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number you want to go through
 * @index: index is the index, starting from 0 of the bit
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	return (n >> index & 1);
}
