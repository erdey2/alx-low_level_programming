#include "main.h"
/**
 * _strspn - Locates a substring
 * @s: the string which we want to check
 * @accept: the character to be matched
 * Return: the length of the match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}
