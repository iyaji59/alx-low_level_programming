#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i >= 98; n--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; n++)
		{
			printf("%d,", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
