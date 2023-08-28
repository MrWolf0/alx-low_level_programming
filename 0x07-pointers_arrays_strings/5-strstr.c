#include "main.h"
#include <stddef.h>

/**
 *_strstr - Locates a substring.
 *@haystack: The string to be searched.
 *@needle: The substring to be located.
 *
 *Return:a pointer to the first occurrence in haystack specified in needle,
 *or a null pointer if the sequence is not present in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
