#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - copys a given string and duplicates it
 *@str: string to be duoplicated
 *Return: pointer to the string duplicated
 */
char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	char *new = malloc(len);

	if (str == NULL)
		return(NULL);

	if (new != NULL)
	{
		memcpy(new, str, len);
	}
	if(new == NULL)
		return NULL;
	return (new);
}
