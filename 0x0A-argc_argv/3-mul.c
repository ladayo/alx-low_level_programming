#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: count
 * @argv: string array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[argc - 1]);
		int b = atoi(argv[argc - 2]);

		printf("%d\n", a * b);
		return (0);
	}
}
