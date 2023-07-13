#include "main.h"

/**
 *_memset - to fill my ptr
 *@s: the pte
 *@a: the input
 *@n: the size to fill
 *Return: ptr allocated
*/

char *_memset(char *s, char a, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = a;
	return (ptr);
}

/**
 *_calloc - alloc size for an array
 *@nmemb: type
 *@size: size
 *Return: @ to allocation
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;

	if (!nmemb || !size)
		return (NULL);
	ret = malloc(size * nmemb);
	if (!ret)
		return (NULL);
	return (_memset(ret, 0, (nmemb * size)));
}
