#include "shell.h"

/**
 *envDisplay - Display enviroment variable
 *@cmd: parsed command
 *@st: status of last command executed
 *Return: Always 0
 */
int
envDisplay(__attribute__((unused)) char **cmd, __attribute__((unused)) int st)
{
	size_t i;
	int len;

	for (i = 0; environ[i] != NULL; i++)
	{
		len = stringLen(environ[i]);
		write(1, environ[i], len);
		write(STDOUT_FILENO, "\n", 1);
	}

	return (0);
}
