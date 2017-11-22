#include "shell.h"

char *shell_getline(void)
{
	char *line;
	size_t bufsize = 0;
	getline(&line, &bufsize, stdin);
	return line;
}
