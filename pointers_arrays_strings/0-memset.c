#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 * @s: memory we will fills
 * @b: constant byte
 * @n: n bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
