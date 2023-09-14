#include "variadic_functions.h"

/**
 * print_strings - print only strings
 * @separator: the string to be printed between numbers
 * @n: the total number of arguments
 * @...: the unknown elements
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arglist;
	char *str;

	va_start(arglist, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
