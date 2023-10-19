#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Ayomitan");
	add_node_end(&head, "Omotayo");
	print_list(head);
	return (0);
}
