#include "main.h"

/**
 *print_sign - start
 *@n: int to check value
 *Return: 1 0 -1
*/

int print_sign(int n)
{
	if (n > 0)
		return (_putchar('+'), 1);
	else if (n < 0)
		return (_putchar('-'), -1);
	else
		return (_putchar('0'), 0);
	return (0);
}
