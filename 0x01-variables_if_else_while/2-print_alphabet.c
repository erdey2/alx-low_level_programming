#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
char c;
for(i = 97; i < 123; i++)
{
c = (char)i;
putchar(c);
}
return (0);
}
