#include <unistd.h>
#include "main.h"

/**
* print_alphabet -  outputs alphabets in lower case
*
*
* Return: Always 0 (Success)
*
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
