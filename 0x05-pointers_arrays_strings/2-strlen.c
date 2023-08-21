#include "main.h"
/**
 * _strlen - display the length of a given string
 * @s: the string to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count = 0, len = 0;

	while (s[count] != '\0')
	{
		len = len + 1;
		count++;
	}
	return (count);
}
