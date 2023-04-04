#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string containing characters to match
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int c, b;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[c] == accept[b])
			{
				return (s + c);
			}
		}
	}
	return (0);
}
