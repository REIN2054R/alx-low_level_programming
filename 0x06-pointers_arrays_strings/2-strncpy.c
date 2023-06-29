#include "main.h"

/**
 *_strncpy - cpy srcin dst
 *@dest: destinqtion
 *@src: src
 *@n : n to move
 *Return : theneew dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
