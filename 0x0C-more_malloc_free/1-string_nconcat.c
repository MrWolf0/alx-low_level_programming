#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using the greater one
 * @s1: first string.
 * @s2: second string.
 * @n: maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: pointer to the concatenated space in memory or null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
/*make the new length equal to the length of s2*/
/*then add the length of s1 to the new length*/
	unsigned int len = n, index_1, index_2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
/*add length of s1 to new length*/
	for (index_1 = 0; s1[index_1]; index_1++)
	{
		len++;
	}
/*allocate memory*/
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
/*append s1 to concat*/
	for (index_1 = 0; s1[index_1]; index_1++)
	{
		concat[index_2++] = s1[index_1];
	}
/*append s2 to concat*/
	for (index_1 = 0; s2[index_1] && index_1 < n; index_1++)
	{
		concat[index_2++] = s2[index_1];
	}
	concat[index_2] = '\0';

	return (concat);
}

