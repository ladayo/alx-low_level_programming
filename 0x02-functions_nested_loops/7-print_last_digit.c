#include <unistd.h>
#include "main.h"

/**
* print_last_digit - ouputs the positive
*@i: parameter i is the number
*
* Return: Always 0 (Success)
*
*/

int print_last_digit(int i)
{
	int d;
	char ch;

	d = i % 10;
	ch = '0' + d;
	_putchar(ch);
	return (ch);
}
