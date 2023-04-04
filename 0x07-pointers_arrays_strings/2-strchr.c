#include "main.h"
/**
 * _strchr - function to locate character in a string
 * @s: string where search is carried out
 * @c: character to search for
 * Return: character value
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	if (s[a] == c)
	{
		return (s + a);
	}
	return (0);
}
