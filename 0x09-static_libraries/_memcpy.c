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
/*Assign 2 pointer to src and dest */
/*just to make new pointers point to the adresses*/
/*instead of manipulate memory addresses directly*/
/*and keep original data */
	char *p = dest;
	char *q = src;
/*check null pointer first*/
	if ((src == NULL) && (dest == NULL))
	{
		return (NULL);
	}
	while (n-- && (*p++ = *q++))
	;
	return (dest);
}
