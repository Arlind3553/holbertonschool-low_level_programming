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
	char *new = (char*)malloc(length(length * sizeof(char));

	if (str == NULL)
		return(NULL);

	if (new != NULL)
	{
		strcpy(new,str);
	}
	if(new == NULL)
		return NULL;
	return (new);
}
