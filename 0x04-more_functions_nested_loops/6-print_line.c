#include "main.h"
/**
* print_line - prints a dash to the terminal a given number of times
* @n: the number of dashes to be drawn
* Return: void
*/
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		count = 1;
		while (count <= n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}

	else
	{
		_putchar('\n');

	}

}
