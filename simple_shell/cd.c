#include "shell.h"

/**
 *changeDir - Changes directory
 *@cmd: Parsed command
 *@st: Status of last command executed
 *Return: 0 on success 1 if failed (For OLDPWD Always 0 incase of no OLDPWD)
 */
int changeDir(char **cmd, __attribute__((unused)) int st)
{
	int value = -1;
	char cwd[PATH_MAX];

	if (cmd[1] == NULL)
		value = chdir(getenv("HOME"));
	else if (myStrcmp(cmd[1], "-") == 0)
	{
		value = chdir(getenv("OLDPWD"));
	}
	else
		value = chdir(cmd[1]);

	if (value == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (value != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}

	return (0);
}
