#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	while(i < size)
	{
		ptr[i] = c;
		i++;
	}
	return(ptr);
}
