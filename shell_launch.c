#include "shell.h"
#include <stdio.h>
#include <string.h>


char *search_path(char temp[])
{
	char *path = NULL;

	int i;

	for (i = 0; environ[i] != '\0'; i++)
	{
		if (strncmp("PATH=", environ[i], 5) == 0)
		{
			path = _strcpy(temp, environ[i]);
			path += 5;
			return (path);
		}
	}
	return (path);
}
