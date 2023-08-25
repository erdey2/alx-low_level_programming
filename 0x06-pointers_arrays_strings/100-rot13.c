#include "main.h"
/**
 * *rot13 - Substitution cipher
 * @n: the string to be substituted
 *  Return: the changed strings
 */
char *rot13(char *n)
{
	int i, j;
	char mstr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cstr[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == mstr[j])
			{
				n[i] = cstr[j];
				break;

			}
		}
	}
	return (n);
}


