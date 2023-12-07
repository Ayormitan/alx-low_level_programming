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
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}
