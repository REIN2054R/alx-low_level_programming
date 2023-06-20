#include "main.h"

/**
 *_isalpha - start
 *@c: character to check
 *Return: 1 or 0
*/

int	_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}

