#include "main.h"
/**
 *_print_rev_recursion - still cant find the recursion
 *@s: print
 *Return: NADA
*/
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if (!s)
		return;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}
