#include"main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and
 *  initializes it with a specific char.
 * @size: the size of the array to be initialized.
 * @c: the specific char to intialize the array with.
 *
 * Return:  a pointer to the array if size  !=0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;
/*check if the memory exhausted first*/
	if (size == 0)
	{
		return (0);
	}
/* allocate memoey*/
/*note that here array pointer point to he first address allocate by malloc ()*/
/*in our case contain 1 byte of addressess 8 bit in case we pass size as integer 1*/
	array = malloc(sizeof(char) * size);

	if (array == 0)
	{
		return (0);
	}
/*fill array with the pass letter*/
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
