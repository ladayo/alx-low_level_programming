#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - print reversed string
 *
 * @s: input string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
