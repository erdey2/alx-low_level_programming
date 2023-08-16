#include "main.h"
/**
* _isalpha - Display whether a given character is alphanumeric or not
* @c: - the integer to be checked
*
* Return: 1 if the integer is alphanumeric. 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
