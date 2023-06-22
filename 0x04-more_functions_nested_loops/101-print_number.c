#include "main.h"

/**
 *print_slides - recursive fct to print 1 by 1
 *@n: int send by the first fct
 *Return: NADA
*/

void	print_slides(int n)
{
	if (n / 10)
		print_slides(n / 10);
	_putchar((n % 10) + '0');
}



/**
 *print_number - print an intigir
 *
 *@n: the int to print
 *Return: NADA
*/

void	print_number(int n)
{
	unsigned int BN;

	if (n < 0)
	{
		_putchar('-');
		BN = -n;
	}
	else
		BN = n;
	if (BN / 10)
		print_number(BN / 10);
	_putchar((BN % 10) + 48);
}
