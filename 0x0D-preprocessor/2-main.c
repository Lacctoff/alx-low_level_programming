#include <stdio.h>

/**
 * main - this function prints out the name of the file it was compiled from.
 *
 * Return: 0. success
 */

int main(void)
{
	char* strng;
	strng = __FILE__;

	printf("%s\n", strng);
	return (0);

}
