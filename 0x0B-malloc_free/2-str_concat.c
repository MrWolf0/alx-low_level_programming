#include"main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat = 0, len = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == 0)
		return (0);

	for (index = 0; s1[index]; index++)
		concat_str[concat++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat++] = s2[index];

	return (concat_str);
}
