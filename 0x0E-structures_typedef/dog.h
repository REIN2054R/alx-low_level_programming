#ifndef DOG_H
#define DOG_H

/**
 *struct dog - data about dog
 *@name : he name
 *@age : he s age
 *@owner: he s owner
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
