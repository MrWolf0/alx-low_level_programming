#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: string array
 *@b: constant byte
 *@n: number of bytes
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n--)
	{
		/*assing b to the address then increament address*/
		*s++ = b;
	}

	return (s);
}
