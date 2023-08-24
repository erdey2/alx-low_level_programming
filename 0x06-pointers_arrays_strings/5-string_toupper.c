#include "main.h"
/**
 * *string_toupper - Changes lowercase to uppercase
 * @n: the string to be changed
 *  Return: strings in uppercase
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] -= 32;
		i++;
	}
	return (n);
}

