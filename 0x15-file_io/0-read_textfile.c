#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: address of file
 * @letters: number of letters to read and print
 *
 * Return: Actual number of letters it read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, size, wr;
	char *buff;
	if (!filename)
		return (0);
	buff = malloc((sizeof(char) * letters));
	if (!buff)
		return (0);
	fd = open(filename, O_RDWR);
	if ((fd == -1))
		return (0);
	size = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, size);
	if ((size < 0) || (wr < 0) || (wr != size))
		return (0);
	return (wr);
	close(fd);
}
