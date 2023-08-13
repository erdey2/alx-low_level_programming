#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int row, col, k;
for (row = 48; row <= 57; ++row)
{
for (col = 48; col <= 57; ++col)
{
for (k = 48; k <= 57; ++k)
{
if (!(col == k) && k > col)
{
if (!(row == col) && col > row)
{
putchar(row);
putchar(col);
putchar(k);
if (!(row == 55 && col == 56 && k == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
