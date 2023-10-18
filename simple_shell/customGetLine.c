#include "shell.h"
/**
 *myGetLine - read input from standard input by user
 *Return: the input on a buffer
 */
char *myGetLine()
{
	int i, rd, buffsize = BUFFERSIZE;
	char c = 0, *buffer, *finalResult;

	buffer = malloc(buffsize);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = 0; c != EOF && c != '\n'; i++)
	{
		fflush(stdin);
		rd = read(STDIN_FILENO, &c, 1);
		if (rd == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		buffer[i] = c;
		if (buffer[0] == '\n')
		{
			return (FreeInput(buffer));
		}
		if (i >= buffsize)
		{
			buffer = realloc(buffer, (buffsize + 2));
			if (buffer == NULL)
			{
				free(buffer);
				return (NULL);
			}
		}
	}
	buffer[i] = '\0';
	finalResult = removeBeginSpace(buffer);
	free(buffer);
	removeHashSign(finalResult);
	return (finalResult);
}

/**
 *FreeInput - Handles newline character input
 *@string: String to be handled
 *Return: Empty string
 */
char *FreeInput(char *string)
{
	free(string);
	return ("\0");
}

/**
 *removeBeginSpace - Modifies the input string to remove whitespace
 *@str: Input to be modifies
 *Return: Returns the modified string
 */
char *removeBeginSpace(char *str)
{
	int index, j = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * (stringLen(str) + 1));
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}

	for (index = 0; str[index] == ' '; index++)
	;
	for (; str[index + 1] != '\0'; index++)
	{
		buffer[j] = str[index];
		j++;
	}

	buffer[j] = '\0';
	if (buffer[0] == '\0' || buffer[0] == '#')
	{
		free(buffer);
		return ("\0");
	}

	return (buffer);
}

/**
 *removeHashSign - function that removes everything after '#'
 *@str: input buffer
 *Return: nothing
 */
void removeHashSign(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '#' && str[i - 1] == ' ' && str[i + 1] == ' ')
		{
			str[i] = '\0';
		}
	}
}
