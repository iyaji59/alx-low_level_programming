#include "main.h"
/**
 * more_numbers - prints 0-14 10 times
 * Return: Success
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
