#include "main.h"
#include <stdio.h>

/**
 * print_rev - main function
 * @s: param
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		i = i;
	}
	for (j = i - 1; j >= 0; j--)
		putchar(s[j]);
}
