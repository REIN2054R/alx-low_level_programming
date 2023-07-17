#include "dog.h"
#include <stdlib.h>

/**
 *ft_strlen - get isze
 *@str: te string to get size
 *Return: the ret
*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
		i++;
	return (i);
}

/**
 *ft_strcpy - cpy src in dst
 *@src: the src
 *@dst: the dst
 *
*/

void	ft_strcpy(char *src, char *dst)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

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
	char *new_name;
	char *new_owner;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	if (name != NULL)
	{
		new_name = malloc(sizeof(char) * (ft_strlen(name) + 1));
		if (!new_name)
		{
			free(new);
			return (NULL);
		}
	}
	new->age = age;
	if (owner != NULL)
	{
		new_owner = malloc(sizeof(char) * (ft_strlen(owner) + 1));
		if (!new_owner)
		{
			free(new_name);
			free(new);
			return (NULL);
		}
	}
	ft_strcpy(name, new_name);
	ft_strcpy(owner, new_owner);
	new->name = new_name;
	new->owner = new_owner;
	return (new);
}
