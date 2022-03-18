#include <stdio.h>
#include <math.h>

/**
*  main - finds the largest prime factor
*
*  Return: Always 0
*/

int main(void)
{
	long int n;
	long int i;
	long int k = 612852475143;

	for (n = 612852475143; n > 0; n--)
	{
		i = n;
		if (k % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
