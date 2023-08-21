#include "main.h"
/**
 * puts_half -print the secong half of giving string to stout device.
 *@str:  is a pointer point to the address of current index in a giving string
 *Return: Always 0.
 */
void puts_half(char *str)
{
int index = 0, len = 0, n;
while (str[index++])
{
len++;
}
if ((len % 2) == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
for (index = n; index < len; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
