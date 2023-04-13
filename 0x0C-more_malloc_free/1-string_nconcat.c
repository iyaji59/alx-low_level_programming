#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, str1, str2;
	char *str;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	str1 = 0;
	str2 = 0;
	while (s2[str2] != '\0')
		str2++;
	while (s1[str1] != '\0')
		str1++;
	if (n >= str2)
		n = str2;
	str = malloc(sizeof(char) * n + str1 + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < str1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[i + str1] = s2[i];
	str[i + str1] = '\0';
	return (str);


}
