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
	unsigned int i = 0, j = 0, len = 0;
	char *new_str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s2 == NULL)
	{
		new_str = s1;
		return (new_str);
	}
	while (s2[len] != '\0')
	{
		len++;
	}

	new_str = malloc(s1, (len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
