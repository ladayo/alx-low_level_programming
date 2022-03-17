#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_numbers - ouputs 0 - 9
*
* Return: Always 0 (Success)
*
*/

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
