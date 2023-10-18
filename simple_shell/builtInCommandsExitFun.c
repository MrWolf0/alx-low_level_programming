#include "shell.h"

/**
 *builtInCmdExit - Exit Status for built-in commands
 *@cmd: Array of parsed command strings
 *@input: Input recieved from user (to be freed)
 *@argv: Arguments before program starts(argv[0] == Shell Program Name)
 *@c: Shell execution count
 *@stat: Exit status
 */
void builtInCmdExit(char **cmd, char *input, char **argv, int c, int stat)
{
	int status, index = 0;
	/*Not the cmd[0] because the first 0 is the name of the program */
	if (cmd[1] == NULL)
	{
		free(input);
		free(cmd);
		exit(stat);
	}

	while (cmd[1][index])
	{
		if (isAlphaCheck(cmd[1][index++]) != 0)
		{
			customError(argv, c, cmd);
			free(input);
			free(cmd);
			exit(2);
		}
		else
		{
			status = intToChar(cmd[1]);
			if (status == 2)
			{
				customError(argv, c, cmd);
				free(input);
				free(cmd);
				exit(status);
			}

			free(input);
			free(cmd);
			exit(status);
		}
	}
}
