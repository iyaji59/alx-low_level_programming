#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be checked for length
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		i = _strlen_recursion(s + 1);
		return (i++);
	}
	return (0);
}
