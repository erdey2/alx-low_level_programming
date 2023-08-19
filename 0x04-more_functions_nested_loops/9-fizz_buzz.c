#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short count;

	for (count = 1; count <= 100; count++)
	{
		if (count != 100)
		{

			if (count % 3 == 0 && count % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (count % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (count % 5 == 0)
			{
				printf("Buzz ");
			}
			else
				printf("%d ", count);
		} else
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}
