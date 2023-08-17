#include "main.h"
/**
* more_numbers - prints a given list of numbers 10 times
* Return: void
*/
void more_numbers(void)
{
	char i;
	char j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
				_putchar(48 + j);
			else
			{
				_putchar(48 + (j / 10));
				_putchar(48 + (j % 10));
			}
			j++;
		}
		_putchar('\n');
	}

}
