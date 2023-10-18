#include "shell.h"

/**
 * main - Entry point to program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Returns condition
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	char *input, **singleCommand, **commands;
	int count = 0, i, condition = 1, stat = 0;
	while (condition)
	{
		count++;
		if (isatty(STDIN_FILENO))
			prompt();
		input = myGetLine();
		if (input[0] == '\0')
		  {
			continue;
		  }
		commands = parserBySemicolne(input);
		for (i = 0; commands[i] != NULL; i++)
		{
		    singleCommand = parserBySpace(commands[i]);
			if (myStrcmp(singleCommand[0], "exit") == 0)
			{
				free(commands);
				builtInCmdExit(singleCommand, input, argv, count, stat);
			}
			free(singleCommand);
		}
		free(commands);
		wait(&stat);
	}
	return (stat);
}
