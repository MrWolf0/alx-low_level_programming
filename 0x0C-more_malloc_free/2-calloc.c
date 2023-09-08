#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of a giving number
 * @nmemb:  number of elements.
 * @size:  byte size of each array element.
 *
 * Return: If pointer to the allocated memory or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
/*a pointer to return*/
	char *ptr;

	unsigned int index;
/*check empty or null value*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
/*allocate memory*/
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
/*assigin 0 to every element of memory block*/
	for (index = 0; index < (size * nmemb); index++)
	{
		ptr[index] = 0;
	}
	return (ptr);
}

