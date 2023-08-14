#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int i, j, k, m;
for (i = 48; i <= 57; ++i)
{
for (j = 48; j <= 57; ++j)
{
for (k = 48; k <= 57; ++k)
{
for (m = 48; m <= 57; ++m)
{
if (!(m == 48 && k == 48 && j == 48 && i == 48))
{
if (i + j < k + m)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(m);
if (!(i == 57 && j == 56 && k == 57 && m == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
}
putchar('\n');
return (0);
}
