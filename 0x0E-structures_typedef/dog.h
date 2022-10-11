#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - creates a struct with members
 * @name: one of the members of the struct
 * @age: one of the members of the struct
 * @owner: one of the members of the struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - this creates the typedef for dogs
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
