#include <unistd.h>
#include "main.h"

/**
 * print_triangle - main function
 * @size: parameter
 * Return: 1 if uppercase and 0 if false
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
