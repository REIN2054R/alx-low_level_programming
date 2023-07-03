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
	int i = 0;
	if (!s)
		return (NULL);
	while (s[i] && i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
