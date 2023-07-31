#include <stdio.h>
#include <stddef.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
