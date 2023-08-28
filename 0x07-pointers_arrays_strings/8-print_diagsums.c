#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

/*here a loop to sum first elemnt in the index array of the main array*/
/*increament index array by size*/
/*if we start with 0 and size = 3*/
/*next index will be a[0+3] you move down in memory*/
	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
/* go back in memory addresses by size */
/*if we have size 3*/
/*here pointer wiil go back by 3 addresses accessing inner array*/
/*from frist index*/
	a -= size;
/*same upper loop just move up in memory*/
	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
