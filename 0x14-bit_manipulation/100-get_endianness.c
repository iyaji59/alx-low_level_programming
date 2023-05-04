#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int h;
	char *s;

	h = 1;
	s = (char *) &h;
	return ((int)*s);
}
