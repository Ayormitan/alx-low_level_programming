#include <stdio.h>
#include "dog.h"
/**
 * main - test function
 *
 * Return: Always success
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Buhari";
	my_dog.age = 23.4;
	my_dog.owner = "APC";
	printf("I love %s, because he is %.1f old and %s owns it\n", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
