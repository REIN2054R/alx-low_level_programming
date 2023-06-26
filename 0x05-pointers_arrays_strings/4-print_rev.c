#include "main.h"

/**
 *print_rev - print a string reversed
 *
 *@s: the string to print
 *return: nada
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, '\n', 1);
}
