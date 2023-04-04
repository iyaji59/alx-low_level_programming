#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory area we are copying to
 * @src: memory area we are copying from
 * @n: size of times to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
