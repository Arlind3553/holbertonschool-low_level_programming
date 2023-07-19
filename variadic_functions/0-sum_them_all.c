#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0;
	
	va_list args;
	va_start(args,n);

	for (int i = 0; i < n; i++)
	{
		sum += va_arg(va, unsingned int)
	}
	return (sum);
}
