#include "main.h"
#include <stdlib.h>
/**
 * find_last_index - find the index at the end of the
 *first word contained in the str.
 * @str: The string to be spit.
 *
 * Return: last index at the end of the word pointed to by str.
 */
int find_last_index(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - calculate the number of words in a str.
 * @str: the main string.
 *
 * Return:  number of words in str.
 */
int count_words(char *str)
{
	int index = 0, word = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			word++;
			index += find_last_index(str + index);
		}
	}

	return (word);
}

/**
 * strtow - splits a string into words.
 * @str: The string to be split.
 *
 * Return: pointer to an array of strings (words) or null.
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = find_last_index(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}

