#include <stdio.h>
#include <stdarg.h>
/**
 *  *print_numbers - function that print numbers followed by a new line
 *   *@n: number of parameters
 *    *@separator: string to be printed between numbers
 *     *Return: sum of all parameters
 *      */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if(seperator)
		{
			if(i != n - 1)
				prtinf("%s", seperator);
		}
	}
	printf("\n");
	va_end(va);
}
