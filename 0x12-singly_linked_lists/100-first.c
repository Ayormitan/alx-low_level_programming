#include <stdio.h>
void first(void)__attribute__((constructor));
/**
 * first - Execur=te before main function
 */
void first(void)
{
	printf("youre beat!,\n");
	printf("I bore\n");
}
