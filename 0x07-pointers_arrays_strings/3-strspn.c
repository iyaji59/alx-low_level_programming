#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to loop through
 * @accept: bytes accepted
 * Return: unsigned integer values
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int result = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				result++;
				break;
			}
		}
		if (s[b] == '\0')
		{
			return (result);
		}
	}
	return (result);
}
