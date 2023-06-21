#include <unistd.h>
#include "main.h"

/**
 * more_numbers - main function
 * Return: 1 if uppercase and 0 if false
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
