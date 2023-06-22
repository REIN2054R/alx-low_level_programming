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
	if (n == 0)
	{
		_putchar(48);
	}
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			print_slides(214748364);
			_putchar(8 + 48);
		}
		else
			print_slides(-n);
	}
	else
		print_slides(n);

}
