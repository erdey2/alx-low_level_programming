#include "variadic_functions.h"

/**
 * print_numbers - print only numbers
 * @separator: the string to be printed between numbers
 * @n: the total number of arguments
 * @...: the unknown elements
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arglist;

	va_start(arglist, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d %s", va_arg(arglist, int), separator);
			}
			else
			{
				printf("%d", va_arg(arglist, int));
			}
		}
		printf("\n");
		va_end(arglist);
	}
}
