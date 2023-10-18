#include "shell.h"

/**
 *myStrcmp - function that compares two string
 *@str1: first string
 *@str2: second string
 *Return: 0 if identical otherwise how much diffrent
 */
int
myStrcmp(char *str1, char *str2)
{
	/*loop checking if there are same characters in the 2 strings*/
	/*actually we must check at least one of two strings */
	/*to avoid segmant fault error*/
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
