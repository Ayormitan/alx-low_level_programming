#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - Function printa all struct dog elements
 *
 *@d: Pointer to the struct element
 *Return: Always succes
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		return;
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	{
		printf("Owner: %s\n", d->owner);
	}
}
