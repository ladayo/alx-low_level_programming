#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: address of file to be created
 * @text_content: address of txt
 *
 * Return: 1 on Success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, count;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (fd != 1)
			return (-1);
		else
			return (1);
	}
	for (count = 0; text_content[count] != '\0'; count++)
		;
	wr = write(fd, text_content, count);
	if (wr < 0)
		return (-1);
	close(fd);
	return (1);
}
