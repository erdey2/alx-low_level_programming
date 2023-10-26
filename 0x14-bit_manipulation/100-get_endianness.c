#include "main.h"
/**
 * get_endianness - check whether your system is big / littile endian 
 *
 * @void: nathing
 *
 * Return: 0 if it is big endian or 1 if litttle endian
 */
int get_endianness(void)
{
	int num = 1;
	
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
	return(0);

}
