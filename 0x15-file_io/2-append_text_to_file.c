#include "main.h"

/**
 * append_text_to_file - add text at the end of a given text
 * @filename: the name of the file to be text appended
 * @text_content: the content of the text to be appended
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwrite, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY, O_APPEND);
	if (text_content != NULL)
		nwrite = write(fd, text_content, len);
	if (fd == -1 || nwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
