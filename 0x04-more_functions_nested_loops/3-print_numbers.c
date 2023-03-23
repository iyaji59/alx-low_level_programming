#include "main.h"
/**
 * print_numbers - to print 0 - 9
 * Return: printed numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
