#include "main.h"

#ifndef BUFSIZE
#define BUFSIZE 1024
#endif

/**
 * main - copy file content to another file
 * @argc: no of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int  input_fd, out_fd, open_flags;
	ssize_t num_read;
	char buf[BUFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	open_flags = O_CREAT | O_WRONLY | O_TRUNC;
	out_fd = open(argv[2], open_flags, 0664);
	if (out_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((num_read = read(input_fd, buf, BUFSIZE)) > 0)
	{
		if (write(out_fd, buf, num_read) != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (num_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(input_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_fd), exit(100);
	}
	if (close(out_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", out_fd), exit(100);
	}
	return (0);
}
