#include "main.h"
#include <stddef.h>
/**
 *_strncpy - copy a specific number of indexes
 *from string as src string to dest string
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to dest.
 *@n: The number of indexes from src to copy to dest.
 *Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	if ((src == NULL) && (dest == NULL))
	{
		return (NULL);
	}

	while (n-- && (*p++ = *src++))
	;
	return (dest);
}
