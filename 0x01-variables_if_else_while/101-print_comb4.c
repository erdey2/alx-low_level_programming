#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
<<<<<<< HEAD
int main(void)
=======
int main(void) 
>>>>>>> b5c2b5e60cd72d5411760d0f383542c07366dea0
{
int row, col, k;
for (row = 48; row <= 57; ++row)
{
<<<<<<< HEAD
for (col = 48; col <= 57; ++col)
{
for (k = 48; k <= 57; ++k)
{
if (!(col == k) && k > col)
{
if (!(row == col) && col > row)
=======
for (col = 48; col <= 57; ++col) 
{
for (k = 48; k <= 57; ++k) 
{
if (!(col == k) && k > col)
{
if (!(row == col) && col > row) 
>>>>>>> b5c2b5e60cd72d5411760d0f383542c07366dea0
{
putchar(row);
putchar(col);
putchar(k);
<<<<<<< HEAD
if (!(row == 55 && col == 56 && k == 57))
=======
if (!(row == 55 && col == 56 && k == 57)) 
>>>>>>> b5c2b5e60cd72d5411760d0f383542c07366dea0
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
