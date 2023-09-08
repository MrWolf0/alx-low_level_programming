#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @num: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int num)
{
	void *ptr = malloc(num);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

