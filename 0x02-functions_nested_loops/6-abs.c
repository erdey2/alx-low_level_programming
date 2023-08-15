#include "main.h"
/**
* _abs - Prints the absolute value of a number
* @n: - the number to be checked its absolute value
*
* Return: n for positive number. -n otherwise
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
