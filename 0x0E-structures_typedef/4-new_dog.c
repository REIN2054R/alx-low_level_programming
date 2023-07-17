#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - take data of a new entri
 *@name: he s name
 *@age: float age
 *@owner: the owner
 *Return: return a struct filled if possible other wise null
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
