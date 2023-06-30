#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 19872)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(19999 - x);

	return (0);
}
