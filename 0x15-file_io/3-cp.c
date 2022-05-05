#include "main.h"

/**
 * error_check - check for reading and writing errors
 * @fdrd: integer returned from read
 * @fdwr: integer returned form writing
 * @argv: pointer arguments to elements entered in terminal
 *
 * Return: void
 */

void error_check(int fdrd, int fdwr, char **argv)
{
	if (fdrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdwr == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write from file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of argument varibles
 * @argv: pointer to argument variables
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int rd, wr,  num_wr, c_rd, c_wr;
	int num_rd = 1024;
	char *file_content;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	rd = open(argv[1], O_RDONLY);
	wr = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	error_check(rd, wr, argv);
	file_content =  malloc(sizeof(char) * 1024);
	if (!file_content)
		return (-1);
	while (num_rd > 0)
	{
		num_rd = read(rd, file_content, 1024);
		if (num_rd == -1)
			error_check(-1, 0, argv);
		num_wr = write(wr, file_content, num_rd);
		if (num_wr == -1)
			error_check(0, -1, argv);
	}
	c_rd = close(rd);
	c_wr = close(wr);
	if (c_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", rd);
		exit(100);
	}
	if (c_wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", wr);
		exit(100);
	}
	free(file_content);
	return (0);
}
