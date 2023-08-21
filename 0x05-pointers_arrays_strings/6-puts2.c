#include "main.h"
/**
 * puts2 - display every anothe string
 * @str: the string to be desplayed
 * Return: display every another string
 */
void puts2(char *str)
{
	int len = 0, count;

	while (str[len] != '\0')
	{
		len++;
	}
	for (count = 0; count < len; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
