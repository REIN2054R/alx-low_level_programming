#include "main.h"

/**
 *print_diagonal - space and slash
 *@n: he number of spaces
 * **/
void	print_diagonal(int n)
{
	int	i;
	int	j;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
