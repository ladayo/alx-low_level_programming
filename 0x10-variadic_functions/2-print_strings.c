#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: sting to be printed after number
 * @n: number of integer passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *j;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(str, char*);
		if (j != NULL)
			printf("%s", j);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
