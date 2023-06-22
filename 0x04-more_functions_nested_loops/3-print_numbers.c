#include "main.h"

/**
 *print_numbers - print numbers
 *Return: no return
*/

void	print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
