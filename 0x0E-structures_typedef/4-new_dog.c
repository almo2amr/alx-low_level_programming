#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - it is a function that returns a length of string
 *
 * @s: string to get its length
 *
 * Return: length (len) of string (@s)
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strcopy - it is a function that copies the string from @src
 *		to the buffer pointed to by @dest
 *
 * @src: the string to be copied
 * @dest: in where the string be copied
 *
 * Return: pointer to @dest
*/
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	desty[i] = '\0';

	return (dest);
}

/**
 * new_dog - it is a function that creates a new dog
 *
 * @name: dog's name
 * @age: the age of the dog
 * @owner: the name of dog owner
 *
 * Return: struct pointer to the new dog, otherwise returns NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
