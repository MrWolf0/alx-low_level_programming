#include "shell.h"

/**
 *builtInCmdCheck - Checks if  command is built-in
 *@cmd: command to be check
 *Return: 0 Succes -1 Fail
 */
int builtInCmdCheck(char **cmd)
{
	builtInCmd fun[] = {
		{ "cd", NULL
		},
		{ "help", NULL
		},
		{ "echo", NULL
		},
		{ "env", NULL
		},
		{ "history", NULL
		},
		{
			NULL, NULL
		}
	};

	int i = 0;

	if (*cmd == NULL)
	{
		return (-1);
	}

	while ((fun + i)->cmd)
	{
		if (myStrcmp(cmd[0], (fun + i)->cmd) == 0)
			return (0);
		i++;
	}

	return (-1);
}
