#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - main function
 * @s: param
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	int temp;

	len = strlen(s);
	for (i = 0; i < len/2; i++)
			{
			temp = s[i];
			s[i] = s[len - 1 - i];
			s[len - i - 1] = temp;
			}

}
