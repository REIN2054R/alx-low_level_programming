#include "main.h"

/**
 *_isdigit - check if it's a digit
 *
 *@c: the num to check
 *Return: 1 or 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
