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

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

