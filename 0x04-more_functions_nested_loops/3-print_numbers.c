#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
* print_numbers - ouputs 0 - 9
*
* Return: Always 0 (Success)
*
*/

void print_numbers(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		_putchar(d + '0');
	}
