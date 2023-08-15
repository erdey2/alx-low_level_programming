#include "main.h"
/**
 * is_lower - Display whether a given character is lowercase or not
 * 
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return _putchar(49);
	else
		return _putchar(48);
}
