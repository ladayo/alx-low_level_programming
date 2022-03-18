#include <stdio.h>
#include <math.h>

/**
*  main - finds the largest prime factor
*
*  Return: Always 0
*/

int main(void)
{
	int c;
	long int num = 612852475143;

	for (c = sqrt(num); c > 3; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);
}
