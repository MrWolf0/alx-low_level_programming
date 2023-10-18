#include "shell.h"

/**
 *reverseArray - function reverse an array
 *@arr: array to reverse
 *@len: length of array
 */
void
reverseArray(char *arr, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = arr[i];
		arr[i] = arr[(len - 1) - i];
		arr[(len - 1) - i] = tmp;
	}
}
