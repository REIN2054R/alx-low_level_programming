#include "main.h"

/**
 *_strpbrk - find a char in a string
 *@s: the string to vheck
 *@accept: character to find
 *Return: string zhen sometjing found
*/

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	a = 0;
	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (accept[b] == s[a])
				return (s + a);
			b++;
		}
		if (accept[b] == s[a])
			return (s + a);
		a++;
	}
	return (0);
}
