#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: string parameter
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	char s = f(name);
	_putchar("%s\n", s);
}
