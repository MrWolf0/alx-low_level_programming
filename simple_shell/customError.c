#include "shell.h"

/**
 *customError - Prints custom Error
 *@argv: Arguments before program starts(argv[0] == Shell Program Name)
 *@c: Error Count
 *@cmd: Array of parsed command strings
 */

void customError(char **argv, int c, char **cmd)
{
	char *er = convertIntToChar(c);

	Print(argv[0]);
	Print(": ");
	Print(er);
	Print(": ");
	Print(cmd[0]);
	Print(": Illegal EXpersion: ");
	Print(cmd[1]);
	Print("\n");
	free(er);
}
