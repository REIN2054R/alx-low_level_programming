#include "main.h"

/**
 *_memcpy - cpy nmbr of mem
 *@dest: where to cpy
 *@src: from where to pcy
 *@n: number to cpy
 *Return: s changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	n--;
	while (n => 0)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}
