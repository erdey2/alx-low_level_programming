#include "main.h"

/**
 * read_textfile - read text from a given filename
 * @filename: the name of the file from where we can read
 * @letters: the size of the beffer
 *
 * Return: the number of letters read on success -1 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1;
	ssize_t nread;

	if (filename == NULL)
		return (0);
	if ((fd1 = open(filename, O_RDONLY)) == -1)
	{
		return (0);
	}
	while ((nread = read(fd1, &letters, 1)) > 0)
	{
		if ((write(STDOUT_FILENO, &letters, nread)) != nread)
			return (0);
	}
	return (nread);
}
