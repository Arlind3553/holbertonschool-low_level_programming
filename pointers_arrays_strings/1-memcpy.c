#include "main." 

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsinged int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
