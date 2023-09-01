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
	int num1, num2, result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
