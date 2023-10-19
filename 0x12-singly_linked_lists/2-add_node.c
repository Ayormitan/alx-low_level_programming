#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *add_node - add new node to a list
 *
 *@head: Head node
 *@str: Pointer to list
 *Return: Always list in elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
