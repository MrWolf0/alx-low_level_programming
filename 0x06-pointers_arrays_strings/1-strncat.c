#include "main.h"
#include <stddef.h>
/**
 *_strncat - Concatenates 2 string as src string to dest string
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to dest.
 *@n: The index from src to be appended to dest.
 *Return: A pointer to the destination string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/*for illustration look 0-strcat.c in the repo*/
	char *p = dest;
	int x;

	if ((src == NULL) && (dest == NULL))
	{
		return (NULL);
	}


	while (p && *p)
	{
		++p;
	}

	/*a loop to stop befor n and append the src index into dest string*/
	for (x = 0; src[x] && x < n; x++)
	{
		*p++ = *src++;
	}

	/*return the dest with src concatenating together*/
	return (dest);
}
