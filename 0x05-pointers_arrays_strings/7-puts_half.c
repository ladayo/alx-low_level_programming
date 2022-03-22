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
int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar (str[i]);
}

_putchar ('\n');
}
