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
#include <stddef.h>
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
/*the final result*/
	unsigned int result = 0;
/* variable to calculate the length*/
	int length = 0;
/*variable to access the string in descending order*/
	int index = 0;
/*hold the value of 0 or 1 as integer not as a char*/
	int converted;
/*hode the number of index to pass to the power fun as the power*/
	int place;
/*if null value passed to the function*/
	if (b == NULL)
	{
		return (0);
	}
	/*calculate length of the string*/
	while (b[length] != '\0')
	{
		length++;
	}

	/*accessing our string from the last index in descending order*/
	/*note that we must start from index 0 but stop before the last index*/
	/*assume that we have a string with 3 indices length is 3*/
	/*start from 1,2 and 3 so we need access index 0*/
	/*to do that use length-1*/
	for (index = length - 1; index >= 0; index--)
	{
/*here its important to specify where ones in the string*/
/*so if you specify ones you can calculate the decimal value*/
/*by using the rule 2 power of the index where i found the value 1*/
		place = (length - 1) - index;
/*check if any value expect 0 or 1 passed to the function*/
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
/*hold 0 and 1 as integers its optional we can compare as '0' or '1'*/
		converted = (b[index] - '0');
/*specify where ones only and pass the index of 1 to the power function*/
/*calculate only 2 power index where 1 found*/
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
/*Variable used in loop counter */
	int i;
/*assign it to 1 even power = 0 it will retuern 1 as */
/*number power 0 = 1*/
	int result = 1;

	for (i = 0; i < number; ++i)
		result *= power;

	return (result);
}
