#include "main.h"
/**
 * *_strncpy - copy a given strings
 * @dest: the string is copied in
 * @src: the string to be copied
 * @n: the length of the string to be copied
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, size = 0;

	while (src[i++])
		size++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = size; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
