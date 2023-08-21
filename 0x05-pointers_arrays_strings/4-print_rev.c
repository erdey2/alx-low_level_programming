#include "main.h"
/**
 * print_rev - display a given string in reverse
 * @s: the string to be desplayed in reverse
 * Return: display the string in reverse
 */
void print_rev(char *s)
{
	int count = 0, len = 0;

	while (s[count] != '\0')
	{
		len = len + 1;
		count++;
	}
	for (--count; count > 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
