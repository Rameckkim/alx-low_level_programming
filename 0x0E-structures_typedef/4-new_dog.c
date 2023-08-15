#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - checks the length of a string
 * @s: pointer to location of the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copies a string from a source to a destination
 * @dest: destination of the string
 * @src: source of the string
 * Return: the new copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - pointer to a new dog information
 * @name: name of the dog
 * @age: dogs age
 * @owner: pointer to the owner string
 * Return: inflromation of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}
	dog->age = age;
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
