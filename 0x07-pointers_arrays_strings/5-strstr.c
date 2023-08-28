#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return:a pointer to the first occurrence in haystack specified in needle,
 *or a null pointer if the sequence is not present in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	/*check null pointer first*/
		if ((haystack == NULL) && (needle == NULL))
	{
		return (0);
	}
/* loop to compare main string to located string*/
	while (*haystack++)
	{
/*The == operator on pointers will compare their content not addresses*/
		while (*needle == *haystack)
		{
/* increment two pointers one address*/
/*based on loop condition*/
/*so here we reassign haystack */
			haystack++;
			needle++;
		}
/* if needle finish return final haystack */
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}

