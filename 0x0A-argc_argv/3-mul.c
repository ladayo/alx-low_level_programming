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
		printf("%d\n", atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
	}
	return (0);
}
