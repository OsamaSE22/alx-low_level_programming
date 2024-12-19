#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog's basic information
 * @name: Pointer to the name of the dog
 * @age: Age of the dog in years
 * @owner: Pointer to the name of the dog's owner
 *
 * Description: This struct stores basic information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
