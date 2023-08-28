#include "main.h"

/**
 * set_string - Sets a string
 * @ss: the string to be set
 * @to: the the string to be replaced
 * Return:The replaced string
 */
void set_string(char **ss, char *to)
{
	*ss = (char *)to;
}
