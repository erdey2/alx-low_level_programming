#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument 1
 * @argv: argument 2
 * Return: int
 */

int main(int argc, char *argv[])
{
	int result = 1, n, numbers[100];

	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}
	for (n = 1; n < argc; n++)
	{
		if (atoi(argv[n]) > 0)
		{
			numbers[n] = atoi(argv[n]);
			result *= numbers[n];
		}
		else if (atoi(argv[n]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%d\n", result);

	return (0);
}
