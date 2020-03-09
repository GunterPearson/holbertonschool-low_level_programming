#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - start of funtion
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	newd->name = name;
	newd->age = age;
	newd->owner = owner;
	return (newd);
}
