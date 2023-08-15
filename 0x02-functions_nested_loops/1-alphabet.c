#include "main.h"
/**
 * print_alphabet - print alphabet lower case
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int i = 0;
for (i = 49; i <= 74; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
