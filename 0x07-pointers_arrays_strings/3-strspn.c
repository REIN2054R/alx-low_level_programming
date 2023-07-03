#include "main.h"

/**
 *_strspn - l of sub-text
 *@s: the main string
 *@accept: man
 *Return: return an int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				break;
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}
