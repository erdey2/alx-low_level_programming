#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fibnum1 = 0, fibnum2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fibnum1 + fibnum2;
		printf("%lu", sum);
		fibnum1 = fibnum2;
		fibnum2 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

