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
int i, new_line, int_dollar;
char c, char_line, char_dollar;
for (i = 97; i < 123; i++)
{
c = (char)i;
putchar(c);
}
for (i = 65; i < 91; i++)
{
c = (char)i;
putchar(c);
}
int_dollar = 36;
char_dollar = (char)int_dollar;
putchar(char_dollar);
new_line = 10;
char_line = (char)new_line;
putchar(char_line);
return (0);
}
