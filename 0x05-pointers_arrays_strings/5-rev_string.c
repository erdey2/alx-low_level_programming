#include "main.h"
/**
 * rev_string - reverse a given string
 * @s: the string to be de reversed
 * Return: the reversed string
 */
void rev_string(char *s)
{
	int i, len = 0;
	char *start, *end, temp;

	start = s;
	end = s;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
