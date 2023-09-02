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
	int result = 0, n, numbers[100];

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else if (argc >= 3)
	{
		for (n = 1; n < argc; n++)
		{
			if (atoi(argv[n]) > 0)
			{
				numbers[n] = atoi(argv[n]);
				result += numbers[n];
			}
			else if (atoi(argv[n]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
