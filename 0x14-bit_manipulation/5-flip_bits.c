#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to flip through
 * @m: number to flip through
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y = 0;

	x = n ^ m;
	while (x > 0)
	{
		y += x & 1;
		x >> 1;
	}
	return (y);
}
