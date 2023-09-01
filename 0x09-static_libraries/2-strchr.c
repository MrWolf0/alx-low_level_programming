#include "main.h"
#include <stddef.h>

/**
 *_strchr - Locates a character in a string.
 *@s: The string to be searched.
 *@c: The character to be located.
 *
 *Return: If c is found - a pointer to the first occurence.
 */
char *_strchr(char *s, char c)
{
	/*Assign  pointer to *s*/
	/*just to make new pointer point to the adresse*/
	/*instead of manipulate memory addresse directly*/
	/*and keep the original data as it is */
	char *p = s;
	/*check null pointer first*/
	if (s == NULL)
	{
		return (NULL);
	}

	/*a loop to check the current index*/
	/*with the character to be located*/
	while (*p++)
	{
		if (*p == c)
		{
			return (p);
		}
	}

	return (NULL);
}
