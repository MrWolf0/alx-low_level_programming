#include "main.h"
#include <stdio.h>
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
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);
    return (0);
}

