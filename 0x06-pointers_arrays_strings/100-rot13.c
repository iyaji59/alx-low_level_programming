#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *s)
{
	char alp1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char alp2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;

	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alp1[j] != '\0'; j++)
		{
			if (s[i] == alp1[j])
			{
				s[i] = alp2[j];
				break;
			}
		}
	}
	return (s);
}
