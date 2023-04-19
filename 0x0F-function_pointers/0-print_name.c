#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints name
 * @name: string parameter
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
