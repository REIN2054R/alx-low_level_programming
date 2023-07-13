#include "main.h"

/**
 *malloc_checked - alloc a memory place and return it
 *@b: the val to allocate
 *Return: return  @ allocated
*/

void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(sizeof(b));
	if (!ret)
		exit(98);
	return (ret);
}
