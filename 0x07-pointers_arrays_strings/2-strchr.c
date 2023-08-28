#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Locates a character in a string
 * @s: the string which we want to check
 * @c: the character to be searched
 * Return: 1 if it is found 0 (NULL) otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
