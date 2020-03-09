#include "dog.h"
/**
 * init_dog - start of funtion
 * @d: pointer to struct
 * @name: pointer to name
 * @age: float containing age
 * @owner: string containing owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
