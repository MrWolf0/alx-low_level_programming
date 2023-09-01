#include "main.h"

/**
 *_isupper - check if the letter is upper case or not
 *@character:  is an ascii character
 *Return: Always 0.
 */
int _isupper(int character)
{
	if (character >= 'A' && character <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
