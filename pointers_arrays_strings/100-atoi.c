#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: pointer to the copied string
 *@src: source of the string we want to copy
 *Return: the pointer to dest
 */
int _atoi(char *s)
	{ int sign = 1, base = 0, i = 0; 
		while (s[i] == ' ') { i++; } 
		if (s[i] == '-' || s[i] == '+') { sign = 1 - 2 * (s[i++] == '-'); } while (s[i] >= '0' && s[i] <= '9') { if (base > INT_MAX / 10 || (base == INT_MAX / 10 && s[i] - '0' > 7)) { if (sign == 1) return INT_MAX; else return INT_MIN; } base = 10 * base + (s[i++] - '0'); } return base * sign; }
