#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: combined strings
 */
char *str_concat(char *s1, char *s2)
{
	int i, x, y;
	char *combstr;

	i = 0;
	x = 0;
	y = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		x++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		y++;
	}
	combstr = malloc(sizeof(char) * (x + y + 1));
	if (combstr == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
	{
		combstr[i] = s1[i];
	}
	for (i = 0; i < y; i++)
	{
		combstr[i + x] = s2[i];
	}
	combstr[i + x] = '\0';
	return (combstr);
}
