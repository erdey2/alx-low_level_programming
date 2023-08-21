#include "main.h"
/**
 * puts_half - display half of a string
 * @str: the string to be desplayed in half
 * Return: display half of string
 */
void puts_half(char *str)
{
	int len = 0, count;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 = 0)
	{
		for (count = len / 2; count < len; count++)
		{
			_putchar(str[count]);
		}
	else 
		for (count = (len / 2) + 1; count < len; count++)
			
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
