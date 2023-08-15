#include "dog.h"

/**
 * init_dog - intitializes dog struct
 * @d: the struct of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
