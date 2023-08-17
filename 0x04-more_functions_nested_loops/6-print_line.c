#include "main.h"

/**
 * print_line - Draws a straight line using the character
 * @n: The number of times to print the char
 */
void print_line(int n)
{
int times;
if (n > 0)
{
for (times = 0; times < n; times++)
{
_putchar('_');
}
}
_putchar('\n');
}
