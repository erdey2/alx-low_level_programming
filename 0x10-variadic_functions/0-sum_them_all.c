#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum variable number of arguments
 * @n: the total elements to be added
 * @...: the unknown elements
 * Return: the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arglist;

	va_start(arglist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
