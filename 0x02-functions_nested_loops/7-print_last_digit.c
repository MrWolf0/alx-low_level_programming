#include "main.h"

/**
 *print_last_digit - getting last digit of any number
 *@number:  is an ascii character
 *Return: Always 0.
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;
	if (number < 0)
	{
		last_digit = last_digit *-1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
