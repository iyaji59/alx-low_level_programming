#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print binary of
 */
void print_binary(unsigned long int n)
{
	int k;

	for (k = (sizeof(unsigned long int) * 8) - 1; k >= 0; k--)
	{
		if ((n >> k) & 1)
		{
			_putchar("1");
		}
		else
		{
			_putchar("0");
		}
	}
}
