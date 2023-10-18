#include "shell.h"

/**
 *handle_builtin - Handles predefined built in commands
 *@cmd: Array of parsed command strings
 *@st: Status of last execution
 *Return: -1 Failure 0 Success
 */
int handle_builtin(char **cmd, int st)
{
	builtInCmd built_in[] = {
		{ "cd", changeDir
		},
		{ "env", envDisplay
		}
	};

	int i = 0;

	while ((built_in + i)->cmd)
	{
		if (myStrcmp(cmd[0], (built_in + i)->cmd) == 0)
		{
			return ((built_in + i)->fun(cmd, st));
		}

		i++;
	}

	return (-1);
}
