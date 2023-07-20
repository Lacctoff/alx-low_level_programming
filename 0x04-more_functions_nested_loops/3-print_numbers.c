#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: no return cause we are applying a void at the start
 * of the function declaration
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
