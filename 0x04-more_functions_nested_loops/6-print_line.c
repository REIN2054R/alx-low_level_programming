#include "main.h"

/**
 *print_line - print gay lane
 *@n: the number of the character "_"
 *Return: NADA
*/

void	print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
}
