#include "main.h"
/**
* print_last_digit - returns the value of the last digit
* @n: - the number to be checked its last digit
*
* Return: the last digit of a given number
*/
int print_last_digit(int n)
{

	int last;

	last = n % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
