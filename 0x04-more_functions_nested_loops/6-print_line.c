#include "main.h"
/**
 * print_line - to print a line
 * @n: parameter
 * Return: Always Success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
