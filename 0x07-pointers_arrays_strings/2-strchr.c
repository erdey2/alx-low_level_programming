#include "main.h"
/**
 * *_strchr - Locates a character in a string
 * @s: the string which we want to check
 * @c: the character to be searched
 * Return: 1 if it is found 0 (NULL) otherwise
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (*s != '\0')
	{
		if (*s == c)
			return (char *) s + i;
		s++;
	}
	return '\0';
}
