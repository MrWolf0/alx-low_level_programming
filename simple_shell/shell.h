#ifndef _SHELL_H_
#define _SHELL_H_
#define BUFFERSIZE 1024
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>
#include <stddef.h>
#define Print(oneChar) (write(STDERR_FILENO, oneChar, stringLen(oneChar)))
/**
 * struct _builtin - Defines a struct that conatins built-in commands
 * with their respective implementation functions
 * @cmd: - Built-in command
 * @fun: - Pointer to custom functions that have
 * similar functionalities as the built-in commands
 */
typedef struct _builtin
{
	char *cmd;
	int (*fun)(char **line, int st);
} builtInCmd;
extern char **environ;
int builtInCmdCheck(char **cmd);
int changeDir(char **cmd, __attribute__((unused))int st);
int
envDisplay(__attribute__((unused)) char **cmd, __attribute__((unused)) int st);
void prompt(void);
int stringLen(char *s);
char **parserBySemicolne(char *input);
char **parserBySpace(char *input);
int myStrcmp(char *str1, char *str2);
void builtInCmdExit(char **cmd, char *input, char **argv, int c, int stat);
int isAlphaCheck(int char_);
void customError(char **argv, int c, char **cmd);
char *convertIntToChar(unsigned int n);
int intToChar(char *s);
int intlen(int num);
void reverseArray(char *arr, int len);
char *_strtok(char *str, const char *delim);
unsigned int check_delim(char c, const char *str);
char *myGetLine();
char *FreeInput(char *string);
char *removeBeginSpace(char *str);
void removeHashSign(char *buff);

#endif
