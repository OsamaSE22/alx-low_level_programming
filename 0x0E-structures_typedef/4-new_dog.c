#include <stdio.h>
#include <stdlib.h>
#include <string.h>  /* For strcpy */
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	/* Allocate memory for the dog structure */
	a = malloc(sizeof(dog_t));
	if (a == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the name and owner strings and copy the content */
	a->name = malloc(strlen(name) + 1);  /* +1 for null terminator */
	if (a->name == NULL)
	{
		free(a);  /* Free previously allocated memory in case of failure */
		return (NULL);
	}
	strcpy(a->name, name);

	a->owner = malloc(strlen(owner) + 1);  /* +1 for null terminator */
	if (a->owner == NULL)
	{
		free(a->name);  /* Free previously allocated name */
		free(a);         /* Free the structure memory */
		return (NULL);
	}
	strcpy(a->owner, owner);

	/* Assign the age */
	a->age = age;

	return (a);
}

