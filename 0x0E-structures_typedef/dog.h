#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct name for my dog data
 *@name: pointer to do name of type char
 *@age: Pointer to my dog age with float type
 *@owner: Pointer to the owner with char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
