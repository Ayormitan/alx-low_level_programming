#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check code
 *
 * Return: Always exit success
 */
int main(void)
{
	dlistint_t *head;
	head = NULL;
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}
