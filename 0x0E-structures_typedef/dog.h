#ifndef DOG_
#define DOG_
/**
 * struct dog - new struct
 * @name: name given
 * @age: age given
 * @owner: who owns it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
