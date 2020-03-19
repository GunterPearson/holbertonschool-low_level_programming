#include "lists.h"
/**
 * printbefore - prints before main is called
 */
void __attribute__ ((constructor)) printbefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
