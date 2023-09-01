#include "main.h"
/**
 *_strncpy - copy a specific number of indexes
 *from string as src string to dest string
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to dest.
 *@n: The number of indexes from src to copy to dest.
 *Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int counter = 0, checker = 0;

	while (src[counter++])
		checker++;

	for (counter = 0; src[counter] && counter < n; counter++)
		dest[counter] = src[counter];

	for (counter = checker; counter < n; counter++)
		dest[counter] = '\0';

	return (dest);
}
