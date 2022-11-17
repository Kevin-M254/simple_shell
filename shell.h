#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <string.h>

extern char **environ;

void prompt(void);
int _strcmpdir(char *s1, char *s2);
int _strlen(char *str);
char *str_concat(char *s1, char *s2);
int put_char(char c);
void place(char *str);
void controlC(int sig);
int slashChar(char *str);
int compareExit(char *s1, char *s2);
int compareEnv(char *s1, char *s2);
char **get_string(char *param);
void run_cmd(char **cmd);
char *find_command(char *command);
char *first_char(const char *haystack, const char *needle);

#endif
