#include "main.h"
/**
 * *leet - Replace characters with numbers
 * @n: the string to be changed
 *  Return: the changed strings
 */
char *leet(char *n)
{
	int i, j;
	char str[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == str[j])
			{
				n[i] = num[j];

			}
		}
	}
	return (n);
}


