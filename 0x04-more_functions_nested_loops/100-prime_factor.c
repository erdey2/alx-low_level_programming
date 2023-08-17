#include <stdio.h>
#include "main.h"
/**
* main - Entry point It prints the prime factor of  a large number
* Return: the largest prime factor
*/
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i += 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
