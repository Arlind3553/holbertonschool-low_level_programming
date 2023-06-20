#include "main.h"
#include <stdio.h>
/**
 * add - adds two numbers together
 * @i: first input
 * @j: second input
 * Return: returns the sum of the numbers
 */
void print_to_98(int n)
{

int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
	printf("%d", i);
	if (i != 98)
	printf(", ");
}
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
	printf(", ");
}
}
printf("\n");
}
