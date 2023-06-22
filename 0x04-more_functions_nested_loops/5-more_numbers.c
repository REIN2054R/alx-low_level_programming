#include "main.h"

/**
 *more_numbers - print list of numbers
 *Return: NADA
*/

void	more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
