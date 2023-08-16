#include <stdio.h>
/**
 * main - write a program to print the first 100 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int last = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;
	printf("%lu", before);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", after);
		after = after + before;
		before = after - before;
	}

	before1 = (before / |);
	before2 = (before % |);
	after1 = (after / |);
	after2 = (after % |);

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", after1 + (after2 / |));
		printf("%lu", after2 % |);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}

