#include "main.h"

/**
 * print_binary - print binary rep of a number
 * @n: number to convert to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int k;

	k = n;
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		/*use recursion, continuously right shift by 1 bit*/
		print_binary(n >> 1);
		k = k & 1;
		_putchar(k + '0');
	}
}
