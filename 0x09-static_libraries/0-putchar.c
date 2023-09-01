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
int main(void)
{
/* the text*/
char text[] = "_putchar";
int counter = 0;
/*a loop will iterate string content of the counter != null terminator*/
while (text[counter] != '\0')
{
_putchar(text[counter]);
counter++;
}
_putchar('\n');
return (0);
}

