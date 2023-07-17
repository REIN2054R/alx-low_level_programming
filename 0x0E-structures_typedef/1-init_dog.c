#include "dog.h"

/**
 *init_dog - init datat of a dog
 *@d: a struct to the dog
 *@name: he s name
 *@age: he s age
 *@owner: owner name
 *Return: no return
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d = malloc(sizeof(struct dog));
		if (!d)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
