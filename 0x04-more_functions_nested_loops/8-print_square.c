#include "main.h"

/**
 *print_square - print ###
 *@size: size of printable
 *return: NADA
*/

void	print_square(int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
