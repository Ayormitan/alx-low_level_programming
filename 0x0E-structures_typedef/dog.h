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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
