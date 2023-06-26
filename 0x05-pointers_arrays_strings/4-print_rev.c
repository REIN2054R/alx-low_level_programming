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
		printf("%c", s[i]);
		i--;
	}
	write(1, "\n", 1);
}
