#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print reversed string
 *
 * @str: input string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str) - 1;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
