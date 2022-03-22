#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of the string
 *
 * @str: input string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int even;
	int odd;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		even = strlen(str) / 2;
		for (i = even; i <= len; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
	else if (len % 2 != 0)
	{
		odd = (strlen(str) - 1) / 2;
		for (i = odd + 1; i <= len; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}
