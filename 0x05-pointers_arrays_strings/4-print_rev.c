#include "main.h"
/**
 * print_rev -print a giving string in reverse order
 *@str:  is a pointer point to the address of current index in a giving string
 *Return: Always 0.
 */
void print_rev(char *str)
{
/*impelement 2 variables length act as the total lengh of the string*/
/*reverse_counter act as counter in for loop to print the sting */
/*in reverse order*/
/*while loop will stop if the current index = null terminator*/
int length = 0;
int reverse_counter = 0;
while (str[length] != '\0')
{
length++;
}
reverse_counter = length-1;
for (reverse_counter = length; reverse_counter >= 0; reverse_counter--)
{
_putchar(str[reverse_counter]);
}
_putchar('\n');
}

