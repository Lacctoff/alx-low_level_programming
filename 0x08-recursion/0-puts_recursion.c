#include "main.h"

/**
 * _puts_recursion - this prints a string followed by a new line
 * @s: input string.
 * Return: returns nothing cause we have used void at the beggining of the
 * function
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
