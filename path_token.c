#include "shell.h"

char **path_token(char *path)
{
	char **dirs;
	int i = 0;
	path = strtok(path, ":");

	dirs = malloc(sizeof(char *) * 64);

	while (path != '\0')
	{
		dirs[i] = path;
		i++;
		path = strtok(NULL, ":");
	}
	dirs[i] = NULL;
	return (dirs);
}
