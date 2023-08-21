#include "main.h"
/**
 * rev_string - reverse a given string
 * @s: the string to be de reversed
 * Return: the reversed string
 */
void rev_string(char *s)
{
	int count = 0, len = 0, i;

	while (s[count] != '\0')
	{
		len = len + 1;
		count++;
	}
	for (--count, i = 0; count >= 0; count--, i++)
	{
		s[i] = s[count];
	}
}
