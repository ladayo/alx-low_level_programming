#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
* more_numbers - ouputs the positive
*
* Return: Always 0 (Success)
*
*/

void more_numbers(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	l = 0;
	while (i < 10)
	{
		while (l <= 14)
		{
			if (l < 10)
			{
				k = l;
			}
			else
			{
				j = l / 10;
				k = l % 10;
				_putchar (j + '0');
			}
			_putchar (k + '0');
			l++;
		}
		i++;
		l = 0;
		_putchar ('\n');
	}
}
