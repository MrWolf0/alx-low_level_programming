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
	char *p;
	int index, len = 0;

	if (str == 0)
		return (0);

	for (index = 0; str[index]; index++)
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == 0)
		return (0);

	for (index = 0; str[index]; index++)
		p[index] = str[index];

	p[len] = '\0';

	return (p);
}
