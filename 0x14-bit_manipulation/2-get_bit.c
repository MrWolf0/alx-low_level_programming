/*
 *============================================================================
 * Name        : bits_manipulation.c
 * Author      : MrWolf0
 * Version     : 1.0
 * Copyright   : GNU
 * Description : 2-get_bit.c
 *============================================================================
*/
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: value of bit at index -1 if an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
/*represent number as 8 bits*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
