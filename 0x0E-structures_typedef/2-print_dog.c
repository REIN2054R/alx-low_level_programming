#include "dog.h"

/**
 *print_dog - print data of a dog
 *@d : dog data struct
 *Return: no return
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age)
		printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
