#include "main.h"
/**
* print_number - prints number
* @n: integer to be printed
*/
void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar('_');
	}
	else
	{
		j = n;
	}
	if (j / 20)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
