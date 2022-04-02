#include "main.h"
#include <stdio.h>
/**
 * main - prints number of argument
 *
 * @argc: count
 * @argv: string array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
