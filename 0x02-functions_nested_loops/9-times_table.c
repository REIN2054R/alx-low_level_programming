#include "main.h"

/**
 *print_i_table - print single tab by single tab
 *@i: the table int
 *Return: NADA
*/

void	print_i_table(int i)
{
	int j;

	j = 0;
	printf("%d", i * j);
	j++;
	while (j <= 9)
	{
		if (i * j < 10)
			printf(",  ");
		else if (i * j >= 10)
			printf(", ");
		printf("%d", i * j);
		j++;
	}
}

/**
 *times_table - print all 9 tables
 *
 *Return: Nothing
*/

void	times_table(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		print_i_table(i);
		i++;
		printf("\n");
	}
}
