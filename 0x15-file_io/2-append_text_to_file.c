#include "main.h"

/**
 * append_text_to_file - add new text at end
 * @filename: - the name of the file
 * @text_content - the new content to be added
 *
 * Return: 1 0n success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));
	close(fd);
	if (len < 0)
		return (-1);

	return (1);

}
