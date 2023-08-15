#include "main.h"

/**
 *_islower - check if the letter is lower case or not
 *@character:  is an ascii character
 *Return: Always 0.
 */
int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
