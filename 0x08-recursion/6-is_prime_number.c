#include "main.h"
/**
 * test_func - to test my function
 * @i: integer parameter
 * @n: integer parameter
 * Return: 0, 1, and test_func
 */
int test_func(int i, int n)
{
	if (n % i == 0 && n != i)
	{
		return (0);
	}
	else if (n % i != 0 && i < n)
	{
		return (test_func(i + 1, n));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - check if inputed integer is prime
 * @n: inputed integer
 * Return: returns 0 and 1
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (test_func(a, n));
	}
}
