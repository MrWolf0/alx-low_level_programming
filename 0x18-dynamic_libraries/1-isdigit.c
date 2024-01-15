#include "main.h"

/**
 *_isdigit - check if the char_ is digit or not
 *@char_:  is an ascii character
 *Return: Always 0.
 */
int _isdigit(int char_)
{
	if (char_ >= '0' && char_ <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
