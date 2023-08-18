#include "variadic_functions.h"

/**
 * sum_them_all - this sums up all parameters entered into the function.
 * @n: basically specifies the number of parameters the function is to take.
 * Return: sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}

	va_end(arg);
	return (sum);
}
