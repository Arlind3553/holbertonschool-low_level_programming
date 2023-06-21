#include <unistd.h>
#include "main.h"

/**
 * more_numbers - main function
 * Return: 1 if uppercase and 0 if false
 */
void print_line(int n)
{
	int i = 0;
	while (i <= n)
	{
		_putchar('_');
			i++;
	}
	_putchar('\n');
}
