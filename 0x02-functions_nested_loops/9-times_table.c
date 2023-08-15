#include "main.h"
/**
 * times_table - Display 9 by 9 multiplication table
 * Return: void
 */
void times_table(void)
{
	int i, j, k, m, n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			k = i * j;
			if (k > 9)
			{
				m = k % 10;
				n = (k - m) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(n + '0');
				_putchar(m + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(k + '0');
			}
				
		}
		_putchar('\n');
	}
}
