#include "main.h"
#include <stddef.h>
/**
 * _strspn - Gets the length of a pattern
 * @s: The main string to be scanned.
 * @accept: The pattern to be measured.
 *
 * Return: Tthe number of characters in the initial segment
 *of s which consist only of characters from accept.
 * segment consist until find a white space
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int num = 0;
	int index;
/*for accessing main string tb be scanning*/
	while (*s)
	{
	if ((s == NULL) && (accept == NULL))
	{
		return (0);
	}
/* comaparing each char in accept to mach the main string */
/* breaking after finish*/
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				num++;
				break;
			}
/* as the function must return a value */
/* and if the accept doesn't reach null terminaor */
/* return the value of num*/
			else if (accept[index + 1] == '\0')
				return (num);
		}

		s++;
	}
	return (num);
}
