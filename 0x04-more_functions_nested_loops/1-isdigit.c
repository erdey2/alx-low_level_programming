#include "main.h"
/**
 * _isdigit - Checks a given letter whether it is digit or not
 * @c: the letter to be checked
 * Return: 1 if it is in uppercase 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
