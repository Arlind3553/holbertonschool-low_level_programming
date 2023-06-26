#include "main.h"
#include <string.h>
/**
 *puts_half - function that prints half of a string
 *@str: string
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
		if(i == n - 1)
			printf ("%i", *(a+i));
		else
			printf("%i. ", *(a + i));
	i++
}
