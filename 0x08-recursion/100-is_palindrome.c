#include "main.h"
/**
 * str_len - calculates length
 * @s - String
 * Return: length of strin s
 */
int str_len(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + str_len(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * str_help - helps more
 * @i: integer i
 * @s: string
 * Return: int value
 */
int str_help(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (str_help(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: str_help
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (str_help(i, s));
}
