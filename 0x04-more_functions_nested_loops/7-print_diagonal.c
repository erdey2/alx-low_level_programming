#include "main.h"
/**
* print_diagonal - prints a daagonal to the terminal a given number of times
* @n: the number of dashes to be drawn
* Return: void
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1 ; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}

	else
	{
		_putchar('\n');

	}

}
