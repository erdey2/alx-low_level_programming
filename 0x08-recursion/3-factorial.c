#include "main.h"
/**
 * factorial - display the factorial of a number recorsevely
 * @n: the number which we want its factorial
 *
 * Return: factorial of a number
 */
int factorial(int n)
{
	int fact = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		fact *= factorial(n - 1);
	}
	return (fact);
}
