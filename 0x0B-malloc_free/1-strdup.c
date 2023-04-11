#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy of the string given as a parameter.
 * @str: parameter to copy
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int a = 0;
	char *b;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;

	b = malloc(sizeof(char) * a + 1);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		b[i] = str[i];
	}
	return (b);
}
