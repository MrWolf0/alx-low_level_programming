#include "main.h"
/**
 * puts_half -print the secong half of giving string to stout device.
 *@str:  is a pointer point to the address of current index in a giving string
 *Return: Always 0.
 */
void puts_half(char *str)
{
/*impelement a variable act as a curser to move through the string*/
/*index by index putting the current index to _putchar function*/
/* start from length/2 index*/
/*this loop will stop if the current index = null terminator*/
int counter = 0;
int length = 0;
int checker = 0;
while (str[length] != '\0')
{
length++;
}
for (counter = length / 2; counter <= length; counter++)
{
checker = counter % 2;
if (checker == 0)
{
_putchar(str[counter]);
}
else
{
_putchar(str[counter]);
}
}
}
