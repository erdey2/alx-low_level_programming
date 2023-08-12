#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int row, col;
for (row = 48; row <= 57; ++row)
{
for (col = 48; col <= 57; ++col)
{
if (!(row == col) && col > row)
{
putchar(row);
putchar(col);
if (!(row == 56 && col == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
