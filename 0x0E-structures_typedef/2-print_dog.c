#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  is a function that prints the member of structures
 * @d: a pointer to the structure to print it out
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
