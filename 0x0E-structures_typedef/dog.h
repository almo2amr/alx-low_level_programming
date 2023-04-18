#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct (dog's information)
 *
 * @name: first member (the name of the dog)
 * @age: second member (the age of the dog)
 * @owner: third member (the name of the owner)
 *
 * description: a long dog struct (information)
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
void free_dog(dog_t *d);

#endif
