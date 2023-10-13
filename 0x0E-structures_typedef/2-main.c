#include <stdio.h>
#include "dog.h"
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 34.5;
	my_dog.owner = "philip";
	print_dog(&my_dog);
	return (0);
}
