#include "dog.h"

/**
 * init_dog - it is a function that initialize a variable of type struct dog
 *
 * @d: ponter to the dog to initialize
 * @name: dog's name
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
