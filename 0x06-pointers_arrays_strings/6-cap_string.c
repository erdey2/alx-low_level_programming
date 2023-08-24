#include "main.h"
/**
 * *cap_string - Changes lowercase separated by space tabulation new line to uppercase
 * @n: the string to be changed
 *  Return: the changed strings
 */
char *cap_string(char *n)
{
	int i = 0;
	
	while (n[i] != '\0')
	{
		while (!(n[i] >= 97 && n[i] <= 122))
			i++;
		if (n[i - 1] == ' ' || 
				n[i - 1] == '\t' || 
				n[i - 1] == '\n' ||
				n[i - 1] == ',' ||
				n[i - 1] == '.' ||
				n[i - 1] == ':' ||
				n[i - 1] == '?' ||
				n[i - 1] == ';' ||
				n[i - 1] == '!' ||
				n[i - 1] == '"'||
				n[i - 1] == '(' ||
				n[i - 1] == ')' ||
				n[i - 1] == '{' ||
				n[i - 1] == '}' ||
				i == 0)
			n[i] -= 32;
		i++;
	}
	return (n);
}

