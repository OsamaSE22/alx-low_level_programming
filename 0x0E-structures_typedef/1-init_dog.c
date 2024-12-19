#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
	{
		printf("Ok");
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
