#include "main.h"

/**
 *print_number - print an intigir
 *
 *@n: the int to print
 *Return: NADA
*/

void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_number(n / 10);
	_putchar(n % 10 + 48);
}
