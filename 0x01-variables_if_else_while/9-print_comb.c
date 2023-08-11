#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if(i == 57)
continue;
putchar(44);
putchar(32);
}
putchar(10);
return (0);
}
