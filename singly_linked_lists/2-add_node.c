#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning
 *@head: pointer to head node
 *@str: string value to the new node
 *Return: the addres of the new elemnt
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	if (new_node == NULL || new_node->string == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
