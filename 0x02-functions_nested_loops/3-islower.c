#include "main.h"
/**
 * _islower - Display whether a given character is lowercase or not
 * @c - the single letter to be checked 
 * Return: 1 if the letter is in lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
