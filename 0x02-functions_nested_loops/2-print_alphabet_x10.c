#include "main.h"
/**
 * print_alphabet_x10 - Print a-z 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, counter = 1;

	while (counter <= 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		counter = counter + 1;
	}
}
