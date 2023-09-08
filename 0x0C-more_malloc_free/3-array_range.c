#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered
 *from min to max.
 * @min: first value of the array.
 * @max: last value of the array.
 *
 * Return:  pointer to the newly created array or null.
 */
int *array_range(int min, int max)
{
	int *ptr, index, size;

	if (min > max)
	{
		return (NULL);
	}
/*calculate size */
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		ptr[index] = min++;
	}
	return (ptr);
}
