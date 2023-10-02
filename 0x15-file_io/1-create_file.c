#include "main.h"

/**
 * create_file - creates a file
 * @filename: - name for the file to be created
 * @text_content: - the content to be there
 *
 * Return: 1 on success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, buf, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	buf = write(fd, text_content, len);

	if (fd == -1 || buf == -1)
		return (-1);

	close(fd);

	return (1);

}
