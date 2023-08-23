#include "main.h"
/**
 * *_strcat - concatenate two strings
 * @dest: the string is copied in
 * @src: the string to be concatenated
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
