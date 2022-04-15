#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all variable parameters
 * @n: number of specified parameter
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, count;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		count = va_arg(args, int);
		sum = sum + count;
	}
	va_end(args);
	return (sum);
}
