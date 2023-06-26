#include "main.h"

/***
 *rev_string - return printed string
 *
 *@s: the s to print
 *Return: nada
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
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
