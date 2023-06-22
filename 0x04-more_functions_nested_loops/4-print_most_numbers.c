#include "main.h"

/**
 *print_most_numbers - no 4 and 2
 *Return: nothing
*/

void	print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
