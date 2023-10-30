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
	int fd1, fd2;
	char buf[1024];
	int nread, nwrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	nread = read(fd1, buf, 1024);
	nwrite = write(fd2, buf, nread);
	if (fd1 == -1 || nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file argv[1]\n");
		exit(98);
	}
	if (fd2 == -1 || nwrite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to argv[2]\n");
		exit(99);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd fd1\n");
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd fd2\n");
		exit(100);
	}
	exit(0);
}
