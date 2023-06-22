#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - main function
 * @n: parameter
 * Return: 1 if uppercase and 0 if false
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		if (i == n - 1)
			continue;
		_putchar('\n');
		}
	}
}
