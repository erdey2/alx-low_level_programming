#include "main.h"
/**
 * print_most_numbers - prints mostly used numbers
 * Return: void
 */
void print_most_numbers()
{
	int count;
	
	for (count = 48; count <= 57; count++)
	{
		if (count != 50 && count != 52)
			_putchar(count);
	_putchar('\n');
	}

}
