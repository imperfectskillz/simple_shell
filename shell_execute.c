#include "shell.h"

int shell_execute(char **args, char **dirs, char *line)
{
	int status = 1;
	pid_t pid;
	char *command = NULL;
	DIR *p_dir;
	struct dirent *p_file;
	int i = 0;
	(void)line;

	pid = fork();
	if (pid < 0)
	{
		printf("error");
	}
	else if (pid == 0)
	{
		for (i = 0; dirs[i] != '\0'; i++)
		{
		        p_dir = opendir(dirs[i]);
			while ((p_file = readdir(p_dir)) != NULL)
			{
				if (strcmp(p_file->d_name, args[0]) == 0)
				{
					command = _concat(dirs[i], args[0]);
					printf("%s is this working", command);
					execve(command, args, NULL);
				}
			}
			closedir(p_dir);
		}
	}
	else
	{
		wait(&status);
	}
	return (status);
}
