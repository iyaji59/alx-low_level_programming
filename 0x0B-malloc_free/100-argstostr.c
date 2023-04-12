#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument value
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int len;
	char *t;
	int i;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	len += (ac + 1);
	t = malloc((i + 1) * sizeof(char) * len);
	if (t == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			t[k] = av[i][j];
			k++;
		}
		t[k] = '\n';
		k++;
	}
	t[k] = '\0';
	return (t);

}
