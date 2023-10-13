#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - function pointer to struct
 *
 * @name: namw of dog
 * @age: Age foe the dog
 * @owner: Owner of the dog
 *Return: the details of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->owner = strdup(owner);
	new_dog->name = strdup(name);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
