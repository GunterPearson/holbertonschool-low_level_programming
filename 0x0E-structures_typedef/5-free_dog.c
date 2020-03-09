#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - start of funtion
 * @d: whats getting free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
