#include <stdio.h>
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
	char *n;
	char *o;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	n = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n == NULL)
	{
		free(newd);
		return (NULL);
	}
	o = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (o == NULL)
	{
		free(newd);
		free(n);
		return (NULL);
	}
	_copy(n, name);
	_copy(o, owner);
	newd->name = n;
	newd->age = age;
	newd->owner = o;
	return (newd);
}
/**
 * _copy - start of funtion
 * @f: first string given
 * @s: second string given
 *
 */
void _copy(char *f, char *s)
{
	int i = 0;
	while (s[i])
	{
		f[i] = s[i];
		i++;
	}
	f[i] = '\0';
}
/**
 * _strlen - start of funtion
 * @p: string given to count
 *
 * Return: int
 */
int _strlen(char *p)
{
	int i = 0;
	while (p[i])
		i++;
	return (i);
}
