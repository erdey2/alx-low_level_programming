#include "main.h"
/**
 * _isupper - Checks a given letter's case
 * @c: the letter to be checked
 * Return: 1 if it is in uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
