#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts2 - unction that prints every other character of a string,
 *starting with the
 *first character, followed by a new line
 *@s: string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
}
