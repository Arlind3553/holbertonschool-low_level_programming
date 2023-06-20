#include "main.h"
/**
 * _isalpha - it takes an argument c of value integer
 * @c: character
 * Return: 1 if the character
 * is a letter and returns 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
}
	else
	return (-1);
}
