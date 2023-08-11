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
int i, new_line;
char c, char_line;
for (i = 97; i < 123; i++)
{
c = (char)i;
putchar(c);
}
new_line = 10;
char_line = (char)new_line;
putchar(char_line);
return (0);
}
