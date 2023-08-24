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
	int i = 0;
	char *temp = dest;

	while (i < n && src[i] != '\0')
	{
		temp[i] = src[i];
		i++;
	}
	return (temp);
}
