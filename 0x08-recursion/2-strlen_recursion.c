#include "main.h"

/**
 *_strlen_recursion - Returns the length of a string.
 *@s: The string to be measured.
 *
 *Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/*number of indexes in a string will increament */
	/*each time we call our fun */
	int index = 0;

	if (*s)
	{
		/*here we increament the index by 1*/
		index++;
		/*add the increament to the total number*/
		index += _strlen_recursion(s + 1);
	}

	return (index);
}
