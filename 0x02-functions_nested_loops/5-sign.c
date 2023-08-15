#include "main.h"

/**
 *print_sign - check if the letter is alphabetic or not
 *@number:  is an ascii character
 *Return: Always 0.
 */
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
