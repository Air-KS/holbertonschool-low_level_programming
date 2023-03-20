#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Description: write description of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
