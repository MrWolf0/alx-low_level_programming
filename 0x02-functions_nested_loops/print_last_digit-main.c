#include "main.h"
/**
 * main - start point of the program
 *
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
 *
 * calling main.h and compile 2 files together with gcc
*the main and the file contain the declaration of putchar function
*/
int main()
{

     int r;
   print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

