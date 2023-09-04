#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings & create a new memory space
 * @s1: the first string
 * @s2: the second string
 *Return: the address of the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1++)
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2++)
			len2++;
	}

	len = len1 + len2;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		result[i] = s2[j];
	result[len] = '\0';

	return (result);
}
