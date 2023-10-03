#include "main.h"
#define BUFSIZE 1024

/**
 * main - copy file content to another file
 * @argc: no of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int in_fd, out_fd;
	int num1 = BUFSIZE, num2 = 0;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp in_fd out_fd\n"), exit(97);
	}
	in_fd = open(argv[1], O_RDONLY);
	if (in_fd < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]), exit(98);
	out_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (out_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(in_fd), exit(99);
	}
	while (num1 == BUFSIZE)
	{
		num1 = read(in_fd, buf, BUFSIZE);
		if (num1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num2 = write(out_fd, buf, num1);
		if (num2 < num1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(in_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", in_fd), exit(100);
	}
	if (close(out_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", out_fd), exit(100);
	}
	return (0);
}
