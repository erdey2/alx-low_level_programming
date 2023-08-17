#include "main.h"
/**
 * more_numbers - prints a given list of numbers 10 times
 * Return: void
 */
void more_numbers(void)
{
	char i;
	char j;
    	for (i = 0; i < 10; i++)
    	{
        	j = 0;
        	while(j <= 14)
        	{
            		if (j <= 9)
            			putchar(48 + j);
            		else
            		{
                		putchar(48 + j / 10);
                		putchar(48 + (j % 10));
            		}
			j++;
        	}
		putchar('\n');
	}	

}
