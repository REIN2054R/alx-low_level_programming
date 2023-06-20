#include "main.h"

/**
 *print_times_table - print x tables
 *@n: nbr of time u print
 *Return: no return
*/

void	print_times_table(int n)
{
	int i;
	int j;

	i = 0;
	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		j = 0;
		printf("%d", i * j);
		j++;
		while (j <= n)
		{
			if (i * j < 10)
				printf(",   ");
			else if (i * j < 100)
				printf(",  ");
			else
				printf(", ");
			printf("%d", i * j);
			j++;
		}
		i++;
		printf("\n");
	}
}
