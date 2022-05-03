#include "main.h"

/**
 * create_file - create a new file and add permissions
 * @filename: address of file to be created
 * @text_content: address of txt
 *
 * Return: 1 on Success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int count = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		creat(filename, 0600);
		return (1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	for (count = 0; text_content[count] != '\0'; count++)
		;
	wr = write(fd, text_content, count);
	if (wr < 0)
		return (-1);
	close(fd);
	return (1);
}
