#include <stdio.h>
/**
* print_to_98 - Prints natural numbers from n to 98
* @n: - the function starts at this
* Return: void
*/
int main(void)
{
	int i, sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
