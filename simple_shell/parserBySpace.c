#include "shell.h"

/**
 *parserBySpace - Parses the command recieved from stdin
 *@input: String gathered from stdin
 *Return: Parsed strings to be used as arguments
 */
char **
	parserBySpace(char *input)
	{
		char **totalLine;
		char *token;
		int i;
		int buffsize = BUFFERSIZE;

		if (input[0] == ' ' && input[stringLen(input)] == ' ')
		{
			exit(0);
		}

		if (input == NULL)
		{
			return (NULL);
		}

		totalLine = malloc(sizeof(char *) * buffsize);
		if (!totalLine)
		{
			free(totalLine);
			perror("Error in allocate dynamic memory");
			return (NULL);
		}

		token = _strtok(input, "\n\t\r ");
		for (i = 0; token; i++)
		{
			totalLine[i] = token;
			token = _strtok(NULL, "\n\t\r ");
		}

		totalLine[i] = NULL;

		return (totalLine);
	}
