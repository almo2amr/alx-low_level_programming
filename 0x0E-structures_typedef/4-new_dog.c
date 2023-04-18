#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - it is a function that returns a length of string
 *
 * @str: string to get its length
 *
 * Return: length (l) of string (@str)
*/
int _strlen(char *str)
{
	int l;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * *_strcpy - it is a function that copies the string from @src
 *		to the buffer pointed to by @dest
 *
 * @src: the string to be copied
 * @dest: in where the string be copied
 *
 * Return: pointer to @dest
*/
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

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
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name =  malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);
}
