#include "shell.h"

char *_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
		i++;

	s1[i] = '/';
	i = i + 1;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';

	printf("%s", s1);
	return (s1);
}
