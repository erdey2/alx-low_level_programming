#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - welcome by name
 * @name: the name of a person
 * @f: function
 * * Return: void
 *
 */

void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

