/*
 * ============================================================================
 *Name        : concatenate-strings.c
 *Author      : Mr Wolf
 *Version     :
 *Copyright   : GNU
 *Description : read README file for more info
 *============================================================================
 */
#include"main.h"
#include <stdlib.h>

int calculate_length(char *s);
/**
 *str_concat - Concatenates two strings.
 *@s1: The string to be concatenated upon.
 *@s2: The string to be concatenated to s1.
 *
 *Return: If concatenation fails - NULL.
 *Otherwise - a pointer the newly-allocated space in memory
 *containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;

	int frist_length, counter = 0, second_lengh, total_amount_mem = 0;

	frist_length = calculate_length(s1);

	second_lengh = calculate_length(s2);

	total_amount_mem = frist_length + second_lengh;

	new_string = malloc(sizeof(char) * total_amount_mem);

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (counter = 0; s1[counter]; counter++)
	{
		new_string[counter] = s1[counter];
	}

	for (counter = 0; s2[counter]; counter++)
	{
		new_string[frist_length++] = s2[counter];
	}

	return (new_string);

}

/**
 *calculate_length - calculate length of a given string
 *@s: the string we need to calculate its length
 *Return: length of a given string
 **/
int calculate_length(char *s)
{
	int counter, length;

	if (!s)
	{
		return (0);
	}

	for (counter = 0; s[counter]; counter++)
	{
		length++;
	}

	return (length);
}
