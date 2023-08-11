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
char end_char, int_char;
for (i = 48; i < 58; i++)
{
int_char = (char)i;
putchar(int_char);
}
end_char = '\n';
putchar(end_char);
return (0);
}
