#include "dog.h"
#include <stdio.h>
/**
 *init_dog - funcction initializes a variable of type struct
 *
 *@d: Pointer to struct datat type
 *@name: Char pointer defined for name
 *@age: Struct defined for age
 *@owner: Struct defined for owner
 *Return: Always success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
