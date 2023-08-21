#include "main.h"
/**
 * _puts -print a giving string to stout device.
 *@str:  is a pointer point to the address of current index in a giving string
 *Return: Always 0.
 */
void puts2(char *str)
{
/*impelement a variable act as a curser to move through the string*/
/*index by index putting the current index to _putchar function*/
/* only if the index is even number*/
/*this loop will stop if the current index = null terminator*/
int counter = 0;
int checker = 0;
while (str[counter] != '\0')
{
checker = counter % 2;
if (checker == 0)
{
_putchar(str[counter]);
}
counter++;
}
_putchar('\n');
}
