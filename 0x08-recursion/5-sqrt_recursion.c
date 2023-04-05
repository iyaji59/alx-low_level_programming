#include "main.h"
/**
 * exponential_cal - returns squareroot
 * @a: integer inputted
 * @b: integer to get squareroot of
 * Return: b, squareroot, -1
 */
int exponential_cal(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
		{
			return (b);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + exponential_cal(a, b + 1));
}
/**
 * _sqrt_recursion - returns natural square root
 * @n: number to check
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (exponential_cal(n, 2));
}
