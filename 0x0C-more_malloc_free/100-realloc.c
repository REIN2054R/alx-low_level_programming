#include "main.h"

/**
 *_realloc - realloc a part of the mem
 *@ptr: src
 *@old_size: old len
 *@new_size: new allocation
 *Return: size of the new allocation
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	i = 0;
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (!ptr && new_size)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return(new_ptr);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	while (i < new_size && i < old_size)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (new_ptr);
}
