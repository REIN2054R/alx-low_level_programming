#ifndef DOG_H
#define DOG_H

/**
 *struct dog - data about dog
 *@name : he name
 *@age : he s age
 *@owner: he s owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
