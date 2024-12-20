#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if(d == NULL)
	{
		return;
	}
	if(d->name == NULL || d->owner == NULL)
	{
		printf("Name: (nil)");
	}
	
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
