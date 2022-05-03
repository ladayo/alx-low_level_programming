#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of argument varibles
 * @argv: pointer to argument variables
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int rd, rd_arg1, wr, c_rd, c_wr;
	char file_content[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rd = open(argv[1], O_RDONLY);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	if (argv[2] != NULL)
		wr = open(argv[2], O_WRONLY | O_TRUNC);
	wr = open(argv[2], O_CREAT | O_WRONLY, 0664);
	while ((rd_arg1 = read(rd, file_content, 1024)))
		write(wr, file_content, rd_arg1);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
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
	return (0);
}
