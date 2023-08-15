#include "main.h"
/**
 *print_times_table - print row*column for n times for n column
  *@number: test
  * Return: Always 0.
 */
void print_times_table(int number)
{
int final_res = 0;
int row, column;
if (number <= 15)
{
for (row = 0; row <= number; row++)
{
for (column = 0; column <= number; column++)
{
final_res = row * column;
if (final_res > 10 && final_res < 100)
{
if (column <= number)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(final_res / 10 + '0');
_putchar(final_res % 10 + '0');
}
else if (final_res >= 100 && final_res < 200)
{
if (column <= number)
{
_putchar(',');
_putchar(' ');
}
_putchar((final_res / 10) / 10 + '0');
_putchar((final_res / 10) % 10 + '0');
_putchar(final_res % 10 + '0');
}
else
{
if (column <= number && column != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar(final_res + '0');
}}
_putchar('\n');
}}}

