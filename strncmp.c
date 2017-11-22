#include "shell.h"

int _strncmp(char *s1, char *s2, int len)
{

	while (len--)
	{
		++s1;
		++s2;
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
