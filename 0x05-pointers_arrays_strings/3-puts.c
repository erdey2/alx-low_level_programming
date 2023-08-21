#include "main.h"
/**
 * _puts - display a given string to the output standard
 * @str: the string to be desplayed
 * Return: display the entered string
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
