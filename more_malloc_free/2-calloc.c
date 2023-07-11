#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if(nmemb == 0 || size == 0)
		return (NULL);
	pointer = calloc(nmemb, size);
	if(pointer == NULL)
		return (NULL);
	return (pointer);
}
