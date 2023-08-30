#include "main.h"

/**
 *_print_rev_recursion - Prints a string in reverse
 *@s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	/*check for null terminator*/
	/*using if instead of while to check*/
	/*becaue if we use while we will*/
	/*print the whole string n times*/
	/*if we have string consist of 10 chars*/
	/*then we will print string 10 times*/
	/*for each call which mean 10 * 10 times*/
	if (*s)
	{
		/*calling our fun by increment address by 1*/
		/*if we have a string put in memory add 1000*/
		/*in first print will be u and memory add will be 1001*/
		/*then call again then memory address 1002 putting t*/
		/*so where p ? if you familier with stack concept*/
		/*LIFO so to speak we use the stack to reverse our string*/
		/*and we just print content of stack*/
		/*so the p letter will be the last lettre out*/
		_print_rev_recursion(s + 1);
		/*print dereference value of s*/
		_putchar(*s);
	}

	/*if we found '\0' put newline*/
	else
		_putchar('\n');
}
