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
	ssize_t nread, nwrite;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd1 = open(filename, O_RDONLY);
	if (fd1 == -1)
	{
		return (0);
	}
	while ((nread = read(fd1, buf, letters)) > 0)
	{
		if (nread == -1)
			return (-1);
		nwrite = write(STDOUT_FILENO, buf, nread);
		if (nwrite == -1 || nwrite != nread)
			return (0);
	}
	free(buf);
	if (close(fd1) == -1)
		return (0);
	return (nwrite);
}
