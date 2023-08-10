#include<stdio.h>
#include<unistd.h>
#include <string.h>

/**
 * main - start point of the program
 *
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
 *
* here just using strlen from string.h to calculate buffer size
*
*then write the string with the same size that assign to the buffer
*
*and using 1 as  file descriptor of  standard output
 */
int main(void)
{
char test[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int buffer =  strlen(test);

write(1, test, buffer);

return (1);
}

