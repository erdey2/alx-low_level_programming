#include "main.h"
/**
 * _islower - Display whether a given character is lowercase or not
 * 
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(49);
		return 1;
	}
	else
	{
		_putchar(48);
		return 0;
	}
}
