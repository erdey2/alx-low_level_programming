#include "main.h"
/**
 * _strcmp - copares two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 *  Return: 1 if they are equall 0 if they are not
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

