#include <stdio.h>
#include "dog.h"


/**
 * init_dog - Initializes a dog structure with provided values.
 * @d: A pointer to the dog structure.
 * @name: A string (char*) representing the dog's name.
 * @age: A float representing the dog's age.
 * @owner: A string (char*) representing the dog's owner's name.
 *
 * This function initializes the members of a dog structure with the
 * provided values. If the provided structure pointer is NULL, the
 * function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
