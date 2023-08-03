#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (first_sqrt_recursion(n, 0));
	}
}
/**
 * first_sqrt_recursion - finds the natural square root of a given integer
 * @n: input number.
 * @i: ilterator.
 * Return: the natural sqaure root.
 */
int first_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (1);
	}
	else
	{
		return (first_sqrt_recursion(n, i + 1));
	}
}
