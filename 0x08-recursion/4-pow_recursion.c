#include "main.h"

/**
 * _pow_recursion - does the exponential of a given integer.
 * @x: the base.
 * @y: the exponent power the base is to be raised to.
 * Return: the value of x raised to power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
