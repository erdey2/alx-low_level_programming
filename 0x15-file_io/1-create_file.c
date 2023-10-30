#include "main.h"

/**
 * create_file - create a file if does not exist before
 * @filename: - name of the file to be created
 * @text_content: - the content for the file to created
 *
 * Return - 1 on success  -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, nwrite;

	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	nwrite = write(fd, text_content, i);
	if (fd == -1 || nwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
