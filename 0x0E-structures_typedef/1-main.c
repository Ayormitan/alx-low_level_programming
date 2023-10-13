#include <stdio.h>
#include "dog.h"
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "poppy", 3.5, "Dog");
	printf("my name is %s, with age %f the owner is %s\n", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
