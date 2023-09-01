#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	}
	else if (argc >= 2)
	{
		for (n = 1; n < argc; n++)
		{
			numbers[n] = atoi(argv[n]);
			result += numbers[n];
			if (!(numbers[n] >= 48) && (numbers[n] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
