#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
* more numbers - ouputs the positive
*
* Return: Always 0 (Success)
*
*/

void more_numbers(void);
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

