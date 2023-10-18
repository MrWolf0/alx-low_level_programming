#include "shell.h"

/**
 *isAlphaCheck - function to check if c is alphabet
 *@letter: character to check
 *Return: 1 if true 0 if false
 */
int isAlphaCheck(int letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
