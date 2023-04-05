#include "main.h"
/**
 * _strlen_recursion - calculates length
 * @s: String
 * Return: length of strin s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - helps more
 * @n1: integer i
 * @s: string
 * @n2: another integer
 * Return: int value
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: str_help
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
