#include "main.h"

/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: array of pointers to strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, nread, nwrite;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	nread = read(fd1, buf, 1024);
	do {
		if (fd1 == -1 || nread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf), exit(98);
		}
		nwrite = write(fd2, buf, nread);
		if (fd2 == -1 || nwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf), exit(99);
		}
		nread = read(fd1, buf, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (nread > 0);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd1 %d\n", fd1), exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd2 %d\n", fd2);
		exit(100);
	}
	free(buf);
	return (0);
}
