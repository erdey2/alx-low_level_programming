#include "main.h"
/**
 * *_strcpy - copy a given string
 * @dest: the copied string string destination
 * @src: from where the string are get
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, counter = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (; counter < len; counter++)
	{
		dest[counter] = src[counter];
		dest[len] = '\0';
	}
	return (dest);
}
