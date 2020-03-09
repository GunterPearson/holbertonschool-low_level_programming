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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void _copy(char *f, char *s);

int _strlen(char *p);

#endif
