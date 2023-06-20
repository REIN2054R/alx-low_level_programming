#include "main.h"

/**
 *_abss - start
 *@c: int to get abs
 *Return: positif int`
*/

int _abss(int c)
{
	if (c >= 0)
		return (c);
	return (-c);
}

/**
 *print_last_digit - start point
 *
 *@c: the number to take the last digit from
 *Return: last digit
*/

int print_last_digit(int c)
{
	int a;

	a = _abss(c);
	_putchar((a % 10) + '0');
	return (a % 10);
}
