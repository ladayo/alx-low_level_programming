#include "main.h"

/**
 * print_number - print integers
 *
 * @n: number
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	else
	{
		j = n;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar(j % 10 + '0');
}
