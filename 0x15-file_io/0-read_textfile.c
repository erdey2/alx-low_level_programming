#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: from which to read the content
 * @letters: the length of the letters
 *
 *Return: on success number of letters read -1 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz, buf;
	char *c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	sz = read(fd, c, letters);
	buf = write(STDOUT_FILENO, c, sz);
	if (fd < 0 || sz < 0 || buf < 0 || buf != sz)
	{
		free(c);
		return (0);
	}
	c[sz] = '\0';
	free(c);
	close(fd);

	return(buf);
}
