/*
 *============================================================================
 *Name        : bits_manipulation.c
 *Author      : MrWolf0
 *Version     : 1.0
 *Copyright   : GNU
 *Description : 0-binary_to_uint.c
 ============================================================================
 */
#include "main.h"
int power(int power, int number);
/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: A pointer to a string of 0 and 1 chars.
 *
 *Return: If b is NULL or contains chars not 0 or 1 - 0.
 *        Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int counter = 0;
	int index = 0;
	int converted;
	int place;

	if (b == '\0')
	{
		return (0);
	}
	/*calculate length of the string*/
	while (b[counter] != '\0')
	{
		counter++;
	}

	/*accessing our string from the last index in descending order*/
	/*note that we must start from index 0 but stop before the last index*/
	/*assume that we have a string with 3 indices length is 3*/
	/*start from 1,2 and 3 so we need access index 0*/
	/*to do that use counter-1*/
	for (index = counter - 1; index >= 0; index--)
	{
		place = (counter - 1) - index;
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		converted = (b[index] - '0');
		if (converted == 1)
		{
			result += power(2, place);
		}
	}

	return (result);
}

/**
 *power - calculate power of given number and power.
 *@power: the power for a given number
 *@number: the number to calculate its power
 *Return: power of number
 */

int power(int power, int number)
{
	int i; /*Variable used in loop counter */
	int result = 1;

	for (i = 0; i < number; ++i)
		result *= power;

	return (result);
}
