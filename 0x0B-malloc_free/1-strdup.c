#include"main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *temp;
	int new_length = 0,counter;
/*check if string is empy*/
	if (!str)
	{
		return(NULL);
	}
/*calculate the length of str*/
	for (counter = 0; counter < str[counter]; counter++)
	{
		new_length++;
	}
/*assigin memory without null operator so we add +1 to the new size */
/*to put in cosideration null opertator*/
	temp = malloc(sizeof(char)* (new_length+1));
	if (!temp)
	{
		return (NULL);
	}
/*loop to make a copy from str in temp */
	for (counter = 0; counter < str[counter]; counter++)
	{
		temp[counter] = str[counter];
	}
/*finally add null operator to the end of temp */
	temp['\0'];
	return (temp);
}

