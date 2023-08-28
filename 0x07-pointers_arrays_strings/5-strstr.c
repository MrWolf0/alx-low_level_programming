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
	int i, j, start;
	int nlen = 0;

	i = 0;
	j = 0;
	start = 0;

	while (needle[nlen] != '\0')
	{
		nlen++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < nlen && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				start = i;
			}
			if (j == nlen - 1)
			{
				return (haystack + start);
			}
		}
	}
	return (0);
}
