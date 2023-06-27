#include "main.h"
#include <stdio.h>
/**
 *_strncmp -  function that copies a string
 *@s1: first string to be compared
 *@s2: string to be compared with s1
 *Return: returns an integer indicating the result of the
 *comparison
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;

		s2++;
	}

return (*(unsigned char *)s1 - *(unsigned char *)s2);

}
