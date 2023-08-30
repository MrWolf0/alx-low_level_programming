#include "main.h"

/**
 *_puts_recursion - Prints a string.
 *@s: The string to be printed.
 */
void _puts_recursion(char *s)
{
/*check for null terminator*/
/*using if instead of while to check pointer validation*/
/*becaue if we use while we will*/
/*print the whole string n times*/
/*if we have a string consist of 10 chars*/
/*then we will print string 10 times*/
/*for each call which mean 10 * 10 times*/
	if (*s)
	{
		/*print dereference value of *s */
		_putchar(*s);
		/*calling our fun again by increment address by 1*/
		_puts_recursion(s + 1);
	}

	/*if we found '\0' put newline*/
	else
		_putchar('\n');
}
