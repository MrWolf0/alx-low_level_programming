/*
 *============================================================================
 * Name        : bits_manipulation.c
 * Author      : MrWolf0
 * Version     : 1.0
 * Copyright   : GNU
 * Description : 5-flip_bits.c
 ============================================================================
 */
#include "main.h"

/**
 * flip_bits - count the number of bits needed to be
 *             flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return:  demand number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
