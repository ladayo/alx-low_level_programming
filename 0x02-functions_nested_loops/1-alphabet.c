#include <unistd.h>
#include "main.h"

/**
 * print_alphabet:  writes the lower case alphabets
 * 
 *
 * Return void
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
