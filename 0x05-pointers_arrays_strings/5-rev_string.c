#include "main.h"
/**
 * rev_string - reverse a string value
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int count = o, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
