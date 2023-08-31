#include "main.h"
/**
 * _puts_recursion - write a string recorsevely
 * @s: the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
