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
	int fd, sz;
	char *c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RONLY);
	sz = read(fd, c, letters);
	if (fd < 0 || sz < 0)
	{
		free(c);
		return (0);
	}
	c[sz] = '\0';
	printf("%s\n", c);
	return (sz);
}
