#include "main.h"
#include <stdio.h>
/**
 * main - prints name of function
 *
 * @argc: count
 * @argv: string array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
