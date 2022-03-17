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
	int d;

	for (d = 48; d < 57; d++)
	{
		_putchar(d);
	
	}
	_putchar('\n');
