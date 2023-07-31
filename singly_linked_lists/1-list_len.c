#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 *@h: header node
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;


	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
