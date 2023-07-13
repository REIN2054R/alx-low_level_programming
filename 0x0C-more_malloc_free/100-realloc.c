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
	if (!ptr && new_size != 0)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	while (i < new_size)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (new_ptr);
}
