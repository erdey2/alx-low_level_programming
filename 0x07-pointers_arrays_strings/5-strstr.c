#include "main.h"

/**
 * _strstr - Finds a substring
 * @haystack: the string to be searched
 * @needle: the 1st occurrence of the substring
 *
 * Return: 1 if string is found 0 otherwise.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
		{
			if (haystack[m + n] == needle[n])
				n++;
			else
				break;
		}
		if (needle[n])
		{
			m++;
			n = 0;
		}
		else
			return (haystack + m);
	}
	return (0);
}
