#include "main.h"
/**
 * factorial - returns the factorial of n numbers
 * @n: number to find it factorial
 * Return: return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
