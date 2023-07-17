#ifndef DOG_H
#define DOG_H

/**
 *struct dog - data
 *dog_t - typedef about dog
 *dog - datat do
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


/**
 *dog_t - typedef for dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
