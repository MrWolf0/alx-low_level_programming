#include<unistd.h>
/**
 * _putchar - a function to act as a builtin putchar() in c
 *
 *@c : is the input char
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
*
*write one character to the buffer
*
*and using 1 as  file descriptor of  standard output
 */
void _putchar(char c)
{
write(1, &c, 1);
}

