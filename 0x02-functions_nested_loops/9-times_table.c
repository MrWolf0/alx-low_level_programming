#include "main.h"
/**
 *  times_table - print row*column for 9 times for 9 column
 * Description: print row*column for 9 times for 9 column
 * Return: Always 0.
 */
void times_table(void)
{
int final_res = 0;
int row, column;
for (row = 0; row <= 9 ; row++)
{
for (column = 0; column <= 9; column++)
{
final_res = row * column;
if (final_res > 9)
{
if (column <= 9)
{
_putchar(',');
_putchar(' ');
}
_putchar(final_res / 10 + '0');
_putchar(final_res % 10 + '0');

}
else
{
if (column <= 9 && column != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(final_res + '0');

}
}

_putchar('\n');
}
}

