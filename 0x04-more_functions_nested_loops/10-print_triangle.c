#include "main.h"

/**
 *print_triangle - print triangle
 *@size: of the spalces and # that create the triangle
 *Return: NADA
*/

void	print_triangle(int size)
{
	int i;
	int j;

	i = size;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i > 0)
	{
		j = -1;
		while (++j < i - 1)
			_putchar(' ');
		while (++j <= size)
			_putchar('#');
		_putchar('\n');
		i--;
	}
}
