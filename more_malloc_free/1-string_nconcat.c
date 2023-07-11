#include <stdio.h>
#include <stlib.h>
#include "main.h"
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int i;

	if (s2 == NULL)
	{
		s2 = "";
		n = 0;

	}

	if (s1 == NULL)
		s1 = "";
	if (n >= (int) strlen(s2))
		n = strlen(s2);
	pointer = malloc(strlen(s1) + n + 1);
	if (pointer == NULL)
	{
		free(new)
		return (NULL);
	}
	strcpy(new, s1);
	for (i = 0; i < n; i++)
		pointer[strlen(s1) + i] = s2[i];
	return (pointer);
}
