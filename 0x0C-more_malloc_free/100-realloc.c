#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr:  pointer to the memory previously allocated.
 * @old_size:  size in bytes of the allocated space for ptr.
 * @new_size:  size in bytes for the new memory block.
 * Return: pointer to the reallocated memory block or the same content
* if both size equal or null if new size = 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *alloc;
	char *ptr_copy, *realloc;
	unsigned int index;
/*check length of old and new if the same return same content*/
	if (new_size == old_size)
	{
		return (ptr);
	}
/*from frist step if ptr still no asign then allocate memory for it*/
	if (ptr == NULL)
	{
		alloc = malloc(new_size);

		if (alloc == NULL)
		{
			return (NULL);
		}
		return (alloc);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
/*point old address to the new one and allocate memory for the new pointer*/
	ptr_copy = ptr;
	alloc = malloc(sizeof(*ptr_copy) * new_size);
	if (alloc == NULL)
	{
		free(ptr);
		return (NULL);
	}
/*reallocate memory from old to new, copy content from old to new address*/
	realloc = alloc;
	for (index = 0; index < old_size && index < new_size; index++)
	{
		realloc[index] = *ptr_copy++;
	}
	free(ptr);
	return (alloc);
}
