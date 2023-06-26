#include "main.h"
/**
 * swap_int - main function
 * @a: first param
 * @b: second param
 */
void swap_int(int *a, int *b)
{
	int random;

	random = *a;
	*a = *b;
	*b = random;
}
