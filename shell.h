#ifndef SHELL_H
#define SHELL_H

#include <dirent.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
extern char **environ;

char *_concat(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int shell_execute(char **args, char **dirs, char *line);
char **path_token(char *path);
int _strlen(char *s);
char *shell_getline(void);
void shell_loop(int argc, char *argv[]);
char *search_path(char temp[]);
char **shell_split(char *line);
int shell_launch(char **args);
int shell_exit(char **ar);
int shell_env(char **ar);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int len);

typedef struct builtin
{
	char *command;
	int (*function)(char **);
} bt;

#endif
