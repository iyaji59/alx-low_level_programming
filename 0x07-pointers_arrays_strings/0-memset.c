#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: the pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < n)
	{
		s[k] = b;
	}
	return (s);

}
