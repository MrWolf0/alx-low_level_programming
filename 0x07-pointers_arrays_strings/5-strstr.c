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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
