#include "main.h"
#include <stddef.h>

/**
 *_memcpy - Copies a number of bytes from the memory area
 *pointed to by src into that pointed to by dest.
 *@dest: A pointer to the memory area to copy src into.
 *@src: The source buffer to copy characters from.
 *@n: The number of bytes to copy from src.
 *
 *Return: A pointer to the destination buffer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *q = src;

	if ((src == NULL) && (dest == NULL))
	{
		return (NULL);
	}

	while (n-- && (*p++ = *q++))
	;
	return (dest);
}
