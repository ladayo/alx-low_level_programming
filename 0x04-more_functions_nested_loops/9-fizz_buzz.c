#include <stdio.h>
/**
* main - print fizzbuz
*
* Return: always 0
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", i);
		}
		printf(' ');
		i++;
	}
	printf("\n");
	return (0);
}
