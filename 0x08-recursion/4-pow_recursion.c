#include "main.h"
/**
 *_pow_recursion - return x power y
 *@x: the number to multply
 *@y: the power
 *Return: x poer y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (99);
}
