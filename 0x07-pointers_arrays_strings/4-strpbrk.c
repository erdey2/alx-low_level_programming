#include "main.h"
/**
 * *_strpbrk - Locates substring in a string
 * @s: the string which we want to check
 * @accept: the substring to be searched
 * Return: 1 if it is found 0 (NULL) otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
