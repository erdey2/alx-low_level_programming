#include <stdio.h>

/**
 * main - entry point
 * @argc: argument 1
 * @argv: argument 2
 * Return: int
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
