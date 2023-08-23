#include "main.h"
/**
 * *_strncat - concatenate two strings
 * @dest: the string is copied in
 * @src: the string to be concatenated
 * @n: the length of the string to be copied
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, counter = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
		counter++;
	}
	dest[i] = '\0';
	return (dest);
}
