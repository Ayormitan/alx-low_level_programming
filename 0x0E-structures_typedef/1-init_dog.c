#include "dog.h"
#include <stdio.h>
/**
 *init_dog - funcction initializes a variable of type struct
 *
 *@struct dog: Struct name for data types
 *@d: Pointer to struct datat type
 *@name: Char pointer to struct name
 *@age: Struct for age of float dt type
 *@owner: Struct pointer to owner
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
