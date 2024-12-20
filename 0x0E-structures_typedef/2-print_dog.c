#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if(d == NULL)
	{
		return;
	}
	if(d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if(d->age == -1)
	{
		printf("Age: (nil)");
	}
	if(d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
