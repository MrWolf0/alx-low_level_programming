#include "main.h"

/**
 *string_toupper - Changes all lowercase letters
 *                 of a string to uppercase.
 *@str: The string to be changed.
 *
 *Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;
	/*this loop take the ascii number of a letter */
	/*subtract it from 32 to get its uppercase letter*/
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
