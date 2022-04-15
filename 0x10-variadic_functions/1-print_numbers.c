#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: sting to be printed after number
 * @n: number of integer passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int j;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(num, int);
		printf("%d", j);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
