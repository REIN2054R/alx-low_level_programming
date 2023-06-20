#include "main.h"

/**
 *_islower - Starting point
 *
 *@c: intiger
 *
 *Return: intiger 1 or 0
*/

int	_islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
