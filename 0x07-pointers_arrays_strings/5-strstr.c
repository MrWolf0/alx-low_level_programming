#include "main.h"

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
	int index = 0;
	/*check null pointer first*/
	if ((haystack == NULL) && (needle == NULL))
	{
		return (0);
	}

	/*loop through main string */
	while (*haystack++)
	{
		/*check equality of strings content */
		/*only if true this loop will execute*/
		while (haystack[index] == needle[index])
		{ /*checking end of the needle string*/
			if (needle[index + 1] == '\0')
				/*return haystack only if two strings match without '\0'*/
				return (haystack);
			index++;
		}
	}

	/*add null terminator to the end of content of return pointer*/
	return ('\0');
}
