#include "main.h"
/**
 * _strlen_recursion - display the length of a string recorsevely
 * @s: the string to be printed
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
