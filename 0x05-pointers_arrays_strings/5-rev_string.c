#include "main.h"

/**
 *rev_string - return printed string
 *
 *@s: the s to print
 *return: nada
*/

void rev_string(char *s)
{
	int i;

	i = 0;
	if (!s)
	{
		write(1, "\n", 1);
		return;
	}
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}
