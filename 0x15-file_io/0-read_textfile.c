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

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	sz = read(fd, c, letters);
	c[sz] = '\0';
	printf("%s\n", c);
	return (sz);
}
