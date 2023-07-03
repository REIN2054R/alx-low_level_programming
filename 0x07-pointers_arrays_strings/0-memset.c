#include "main.h"

/**
 *_memset - return char
 *@s: string to fill
 *@b: what to fill with
 *@n: nbr of byte to fill
 *Return: return string changed
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char	*i = (unsigned char *) s;

	while (n-- > 0)
	{
		*i++ = b;
	}
	return (s);
}
