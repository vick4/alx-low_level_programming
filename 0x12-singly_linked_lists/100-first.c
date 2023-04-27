#include <stdio.h>

/**
 * first - prints a sentence before the main function is executed
 *
 * This function is marked with the __attribute__ ((constructor))
 * attribute, which means that it will be executed automatically
 * before the main function is executed.
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
